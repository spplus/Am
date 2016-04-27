
#ifndef __RECVTASK_H__
#define __RECVTASK_H__
#include "ace/Task.h"
#include "include/bizinterface.h"
#include "include/packetparser.h"

class RecvTask	:public ACE_Task<ACE_MT_SYNCH>
{
public:
	// ���캯��
	RecvTask();
	~RecvTask();

	// �����߳�
	void	start();

	// �ر��߳�
	void	close();

	// �߳����
	int		svc();

	void	setContext(BizInterface* biz,PackInterface* pack);

private:
	// ��������
	void	ParseData(ACE_Message_Block* mb);

private:
	
	BizInterface*		m_biz;
	bool				m_stop;
	PackInterface*		m_pack;
};


#endif