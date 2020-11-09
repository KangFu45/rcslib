#include <iostream>

#include <nml.hh>
#include <am_nml.h>

#include <tool.h>

int main()
{
    std::string path = GetExePath();

    //客户端2类似现实中的前端界面，读取底层发送的设备状态，发送操作者命令
    RCS_CMD_CHANNEL* command_buffer = new RCS_CMD_CHANNEL(amFormat, "amCommand", "amClient2", (path + "/AM.nml").c_str());
    RCS_STAT_CHANNEL* status_buffer = new RCS_STAT_CHANNEL(amFormat, "amStatus", "amClient2", (path + "/AM.nml").c_str());

    AM_CMD_TEST_1 c_msg;
    c_msg.c = 'A';
    c_msg.d = 10.0;

    AM_STAT_TEST_1* s_msg;

    int i = 0;

    while (i < 100)
    {
        //写cmd
        if (0 != command_buffer->write(c_msg)) {
            printf("error cmd writing: %d\n", command_buffer->error_type);
        }

        printf("cmd writing: %c %f\n",c_msg.c, c_msg.d);
        if (c_msg.c > 'z')
            c_msg.c = 'A';
        ++c_msg.c;
        c_msg.d -= 0.1;

        //读cmd
        switch (status_buffer->read()) {
        case 0: // no new message 
            break;
        case -1: // NML error 
            printf("error stat reading: %d\n", status_buffer->error_type);
            break;
        case AM_STAT_TEST_1_TYPE:
            s_msg = (AM_STAT_TEST_1*)status_buffer->get_address();
            printf("stat reading: %d %f\n", s_msg->b, s_msg->d);
            break;
        }

        ++i;
        esleep(1);
    }

    std::cout << "Hello World!\n";
    system("pause");
    return 0;
}
