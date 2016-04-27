#include "ace/Log_Msg.h"
#include "ace/Reactor.h"
#include "recvTask.h"
#include "clientmgr.h"
#include "include/structs.h"

RecvTask::RecvTask()
{
	m_stop = false;
}

RecvTask::~RecvTask()
{
	
}

void RecvTask::start()
{
	activate();
}

void RecvTask::setContext(BizInterface* biz,PackInterface* pack)
{
	m_biz = biz;
	m_pack = pack;
}

void RecvTask::close()
{
	m_stop = true;

	LOG->message("Close reactor.");

}
int RecvTask::svc()
{
	LOG->message("RecvTask start ok.");
	ACE_Message_Block* mb = NULL;
	ACE_Time_Value tv(0,1);
	while (!m_stop)
	{
		if (getq(mb) != -1)
		{
			ParseData(mb);
			mb->release();
		}
		ACE_OS::sleep(tv);
	}

	LOG->message("RecvTask exit");

	// 系统退出
	close();
	return 0;
}

void RecvTask::ParseData(ACE_Message_Block* mb)
{

	// 1. 数据解包
	switch (mb->msg_type())
	{
	case SYS_MSG_CONNECTED:
		App_ClientMgr::instance()->stopTimer();
		break;
	case SYS_MSG_CLOSED:
		App_ClientMgr::instance()->startTimer();
		break;
	default:
		{
			sClientMsg*	msg = m_pack->decoderS(mb->rd_ptr(),mb->length());

			// 调用业务路径处理
			m_biz->exec(msg);

		}
		
		break;
	}

}