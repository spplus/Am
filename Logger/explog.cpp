#include "include/explog.h"
#include "logger.h"

ExpLog* ExpLog::m_inst = NULL;

ExpLog::ExpLog()
{

}

ExpLog* ExpLog::instance()
{
	if (m_inst == NULL)
	{
		m_inst = new ExpLog();
	}
	return m_inst;
}

void ExpLog::unInstance()
{
	if (m_inst != NULL)
	{
		delete m_inst ;
		m_inst = NULL;
	}
}

void ExpLog::start(char* logname)
{
	App_Logger::instance()->load_config("logconf.conf");
	App_Logger::instance()->set_logname(logname);
	App_Logger::instance()->open_logger();
}

void ExpLog::error(const char * fmt, ...)
{
	va_list ap;
	char _buff[LOG_INPUT_SIZE] = {0};
	va_start(ap, fmt);
	ACE_OS::vsnprintf(_buff+ACE_OS::strlen(_buff), sizeof(_buff)-ACE_OS::strlen(_buff), fmt, ap);
	va_end(ap);

	m_mutex.acquire();
	App_Logger::instance()->error(_buff);
	m_mutex.release();
}

void ExpLog::debug(const char * fmt, ...)
{

	va_list ap;
	char _buff[LOG_INPUT_SIZE] = {0};
	va_start(ap, fmt);
	ACE_OS::vsnprintf(_buff+ACE_OS::strlen(_buff), sizeof(_buff)-ACE_OS::strlen(_buff), fmt, ap);
	va_end(ap);

	m_mutex.acquire();
	App_Logger::instance()->debug(_buff);
	m_mutex.release();
}

void ExpLog::message(const char * fmt, ...)
{
	va_list ap;
	char _buff[LOG_INPUT_SIZE] = {0};
	va_start(ap, fmt);
	ACE_OS::vsnprintf(_buff+ACE_OS::strlen(_buff), sizeof(_buff)-ACE_OS::strlen(_buff), fmt, ap);
	va_end(ap);

	m_mutex.acquire();
	App_Logger::instance()->message(_buff);
	m_mutex.release();
}

void ExpLog::warn(const char * fmt, ...)
{
	va_list ap;
	char _buff[LOG_INPUT_SIZE] = {0};
	va_start(ap, fmt);
	ACE_OS::vsnprintf(_buff+ACE_OS::strlen(_buff), sizeof(_buff)-ACE_OS::strlen(_buff), fmt, ap);
	va_end(ap);

	m_mutex.acquire();
	App_Logger::instance()->warn(_buff);
	m_mutex.release();
}