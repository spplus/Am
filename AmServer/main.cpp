/************************************************************************/
/* 
	DESC:	���������.
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

	// ������־
	LOG->start(LOGNAME);

	// ����������
	App_Server::instance()->start(new BizBase,new PacketParser);

	// �����ͻ�������
	App_Client::instance()->start(new BizBase,new PacketParser);

	// ��ʼ�����ݿ�����
	App_Dba::instance()->init();

	// �����¼�ѭ��
	ACE_Reactor::instance()->run_reactor_event_loop();
	
	ACE::fini();
	return 0;
}