#include "include/netclient.h"
#include "clientmgr.h"

void NetClient::start(BizInterface* biz,PackInterface* pack)
{
	App_ClientMgr::instance()->init();
	App_ClientMgr::instance()->start();

}

void NetClient::close()
{
	App_ClientMgr::instance()->close();
}

int NetClient::sendData(char* data,int length,int msgtype)
{
	return App_ClientMgr::instance()->sendData(data,length,msgtype);
}