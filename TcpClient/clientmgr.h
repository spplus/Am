/************************************************************************/
/* 
		DESC:	����SCADA�ͻ��˹�����.
		DATE:	2016-04-21
		AUTHOR:	YUANLS
*/
/************************************************************************/

#ifndef __SCADACLIENTMGR_H__
#define __SCADACLIENTMGR_H__

#include "ace/Connector.h"
#include "ace/SOCK_Connector.h"
#include "ace/Singleton.h"
#include "clienthandler.h"
#include "recvTask.h"
#include "keepAliveHandler.h"
#include "tcpClient.h"

class ClientMgr
{
public:
	// ��ʼ���ͻ����������
	void	init();

	// �����ͻ�������
	void	start();

	// �ر�����
	void	close();

	// ��������
	int		sendData(char* data,int length,int msgtype);

	void	setPack(PackInterface* pack);

	void	startTimer();
	void	stopTimer();

private:
	PackInterface*		m_pack;
	RecvTask*			m_rTask;
	TcpClient			m_tcpClient;
	KeepAliveHandler	m_kpHandler;
	ACE_INET_Addr		m_svrAddr;
};
typedef ACE_Singleton<ClientMgr, ACE_Recursive_Thread_Mutex>  App_ClientMgr;
#endif