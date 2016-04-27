#include "include/tcpserver.h"
#include "include/explog.h"
#include "include/defines.h"
#include "tcpservermgr.h"
#include "clientmgr.h"
#include "clientmsgservice.h"

void TcpServer::start(BizInterface * biz,PackInterface* pack)
{
	if (biz == NULL || pack == NULL)
	{
		LOG->error("bizinterface or pack can not be null.");
		return;
	}

	// 设置消息处理
	App_CMService::instance()->setContext(biz,pack);

	App_ClientMgr::instance()->setPack(pack);

	// 启动服务器侦听
	App_TcpServer::instance()->init();
	App_TcpServer::instance()->start();
}

void TcpServer::close()
{
	App_TcpServer::instance()->stop();
}


int TcpServer::sendData(const int connid,const string data,const int msgtype)
{
	return App_ClientMgr::instance()->sendData(connid,data,msgtype);
}
