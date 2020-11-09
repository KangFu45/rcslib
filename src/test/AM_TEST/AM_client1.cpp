#include <iostream>

#include <nml.hh>
#include <am_nml.h>

#include <tool.h>

int main()
{
    std::string path = GetExePath();

    //客户端1类似于现实中的运动控制与IO控制，接收前端发送的命令，发送设备状态
    RCS_CMD_CHANNEL* command_buffer = new RCS_CMD_CHANNEL(amFormat, "amCommand", "amClient1", (path + "/AM.nml").c_str());
    RCS_STAT_CHANNEL* status_buffer = new RCS_STAT_CHANNEL(amFormat, "amStatus", "amClient1", (path + "/AM.nml").c_str());
    
    AM_CMD_TEST_1* c_msg;

    AM_STAT_TEST_1 s_msg;
    s_msg.b = true;
    s_msg.d = 0.0;

    int i = 0;

    while (i < 100)
    {
        //写stat
        if (0 != status_buffer->write(s_msg)) {
            printf("error stat writing: %d\n", status_buffer->error_type);
        }

        printf("stat writing: %d %f\n", s_msg.b, s_msg.d);
        s_msg.b = !s_msg.b;
        s_msg.d += 0.1;

        //读cmd
        switch (command_buffer->read()) {
        case 0: // no new message 
            break;
        case -1: // NML error 
            printf("error cmd reading: %d\n", command_buffer->error_type);
            break;
        case AM_CMD_TEST_1_TYPE:
            c_msg = (AM_CMD_TEST_1*)command_buffer->get_address();
            printf("cmd reading: %c %f\n", c_msg->c, c_msg->d);
            break;
        }
    
        ++i;
        esleep(1);
    }

    std::cout << "Hello World!\n";
    system("pause");
    return 0;
}
