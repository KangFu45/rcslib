#include <iostream>

#include <am.h>
#include <rcs.hh>
#include <cmd_msg.hh>

#include <tool.h>

int main()
{
	std::string path = GetExePath();

	// connect to NML buffers 
	// 服务器为master，远程连接时，必须有服务器，
	// 本地连接，可让一个客户端做master，不需要服务器
	RCS_CMD_CHANNEL* command_buffer = new RCS_CMD_CHANNEL(amFormat, "amCommand", "amServer",  (path + "/AM.nml").c_str());
	RCS_STAT_CHANNEL* status_buffer = new RCS_STAT_CHANNEL(amFormat, "amStatus", "amServer", (path + "/AM.nml").c_str());

	// run NML server(s) for both buffers; doesn't return 
	nml_start();

	//run_nml_servers();

    std::cout << "Hello World!\n";
    system("pause");

	nml_cleanup();
	return 0;
}
