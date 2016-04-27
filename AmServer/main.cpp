/************************************************************************/
/* 
	DESC:	服务器入口.
	DATE:	2016-04-20
	AUTHOR:	YUANLS	
*/
/************************************************************************/

#include "ace/Reactor.h"
#include "dbaccess.h"
#include "conf/confmgr.h"
#include "include/tcpserver.h"
#include "bizbase.h"
#include "include/packetparser.h"
#include "include/netclient.h"

int ACE_TMAIN (int, ACE_TCHAR *[]) 
{
	ACE::init();

	// 启动日志
	LOG->start(LOGNAME);

	// 启动服务器
	App_Server::instance()->start(new BizBase,new PacketParser);

	// 启动客户端连接
	App_Client::instance()->start(new BizBase,new PacketParser);

	// 初始化数据库连接
	App_Dba::instance()->init();

	// 启动事件循环
	ACE_Reactor::instance()->run_reactor_event_loop();
	
	ACE::fini();
	return 0;
}