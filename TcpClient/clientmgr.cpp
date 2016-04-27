#include "clientmgr.h"
#include "conf/confmgr.h"

void ClientMgr::init()
{
	LOG->start("Am_Client");

	if (!App_Config::instance()->load(SERVER_CONFIG))
	{
		LOG->error("load server conf failed.");
		return ;
	}

	// ��ȡ������Ϣ
	int port = ACE_OS::atoi(App_Config::instance()->getValue(SERVER_ROOT,"ScadaPort").c_str());
	string addr = App_Config::instance()->getValue(SERVER_ROOT,"ScadaAddr");

	m_svrAddr.set(port,addr.c_str());

	// ������Ϣ��������
	m_rTask = new RecvTask();
	m_tcpClient.setRecvTask(m_rTask);

	// ��ʱ��������
	m_kpHandler.setClient(&m_tcpClient);

}

void ClientMgr::setPack(PackInterface* pack)
{
	m_pack = pack;
}

void ClientMgr::start()
{
	m_rTask->start();
	m_tcpClient.connect(m_svrAddr);
}

void ClientMgr::close()
{
	m_tcpClient.close();
	m_rTask->close();

}

int ClientMgr::sendData(char* data,int length,int msgtype)
{
	
	ACE_Message_Block * mb = new ACE_Message_Block(length);
	ACE_OS::memcpy(mb->wr_ptr(),data,length);
	mb->wr_ptr(length);

	return m_tcpClient.send(mb);
}

void ClientMgr::startTimer()
{
	ACE_Time_Value initialDelay (1);
	ACE_Time_Value interval (1000);
	
	ACE_Reactor::instance()->schedule_timer (&m_kpHandler,
		0,
		initialDelay,
		interval);
}

void ClientMgr::stopTimer()
{
	ACE_Reactor::instance()->cancel_timer(&m_kpHandler);
}
