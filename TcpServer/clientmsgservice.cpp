
#include "ace/OS_NS_unistd.h"
#include "clientmsgservice.h"
#include "include/commands.h"
#include "include/defines.h"

void ClientMsgService::start()
{
	m_stop = false;
	activate();

	LOG->message("client message service started.");
}

void ClientMsgService::stop()
{
	m_stop = true;
}


int ClientMsgService::put(ACE_Message_Block* mb)
{
	return putq(mb);
}

void ClientMsgService::setContext(BizInterface* biz,PackInterface* pack)
{
	m_biz = biz;
	m_pack = pack;
}

int ClientMsgService::svc()
{
	ACE_Time_Value tv(0,1);
	while(!m_stop)
	{
		ACE_Message_Block* mb ;
		if(getq(mb) != -1)
		{
			// 对接收到的请求，进行处理
			parseData(mb);

			mb->release();
		}
		ACE_OS::sleep(tv);
	}
	return 0;
}

void ClientMsgService::parseData(ACE_Message_Block* mb)
{
	if (m_biz == NULL)
	{
		LOG->error("bizinterface can not be null");
		return;
	}
	if (m_pack == NULL)
	{
		LOG->error("packinterface can not be null");
		return;
	}

	if (mb->length() > MAX_PACKET_LEN )
	{
		LOG->error("Invalid data length %d",mb->length());
		return;
	}
	// 解包
	sClientMsg* msg = m_pack->decoder(mb->rd_ptr(),mb->length());

	if (msg == NULL)
	{
		return ;
	}
	
	// 设置连接ID
	msg->connectId = mb->msg_type();

	// 调用业务逻辑处理
	m_biz->exec(msg);

	delete msg;
}
