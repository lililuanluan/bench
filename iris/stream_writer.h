#ifndef IRIS_STREAM_WRITER_H_
#define IRIS_STREAM_WRITER_H_


#include <cstdio>
#include <cstdlib>

#include "writer.h"
#include "helper.h"

extern int fileno(FILE* __stream) __attribute__((__nothrow__));

// A log writer that appends logs to a standard stream.
class stream_writer : public writer {
public:
    stream_writer(FILE* stream) : m_stream(stream), m_fd(-1) {
        if (stream)
            m_fd = fileno(m_stream);
    }
    virtual void write(const char* msg) {
        size_t len = Strlen(msg);
        this->write(msg, len);
    }
    virtual void write(const char* buffer, size_t len) {
        
    }
protected:
    FILE* m_stream;
    int         m_fd;
};



#endif