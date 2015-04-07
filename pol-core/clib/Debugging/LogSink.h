/*
ATTENTION:
This header is part of the PCH
Remove the include in all StdAfx.h files or live with the consequences :)
*/
#ifndef LOG_SINK_H
#define LOG_SINK_H

#include <boost/noncopyable.hpp>
#include "../../lib/format/format.h" //TODO: simplify this after cleanup of build system
#include <string>

namespace Pol{ namespace Clib{ namespace Logging{

class LogSink : boost::noncopyable
{
public:
    LogSink();
    virtual ~LogSink();

    virtual void addMessage(fmt::Writer* msg) = 0;
    virtual void addMessage(fmt::Writer* msg, std::string id) = 0;

    /**
     * Helper function to print timestamp into stream
     */
    static void addTimeStamp(std::ostream &stream);

    /**
     * Formats and returns current time as std::string
     */
    static std::string getTimeStamp();
};

}}} // namespaces

#endif