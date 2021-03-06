
#include "include/defines.h"
#include "clientmgr.h"
ClientMgr::ClientMgr()
{
	m_connectId = 1000;
}

void ClientMgr::setPack(PackInterface* pack)
{
	m_pack = pack;
}

unsigned int ClientMgr::add(ClientHandler* client)
{
	m_connectId++;
	m_clientList.insert( CMAP::value_type(m_connectId, client));
	return m_connectId;
}

void ClientMgr::del(unsigned int connid)
{
	m_clientList.erase(m_clientList.find(connid));
}

ClientHandler* ClientMgr::get(unsigned int connid)
{
	CMAP::iterator iter = m_clientList.find(connid);
	if (iter != m_clientList.end())
	{
		return iter->second;
	}
	else
	{
		return NULL;
	}
}

int ClientMgr::sendData(unsigned int connid,string data,int msgtype)
{
	// �������
	int outLength = 0;
	char * buff = m_pack->encoder(data,msgtype,outLength);
	
	ClientHandler* handler = get(connid);
	if (handler != NULL)
	{
		return handler->SendData(buff,outLength);
	}
	else
	{
		delete []buff;
		LOG->error("can not find connection :%d,send failed.",connid);
		return -1;
	}
}