#ifndef IRIS_FILE_WRITER_H_
#define IRIS_FILE_WRITER_H_


#include <cstdio>
#include <cstdlib>
#include "helper.h"


// A log writer that appends logs to a file.
class file_writer {
public:
    file_writer(const char* filename) {
        fp = fopen(filename, "a");

    }
    ~file_writer() {
        fclose(fp);
    }
    void write(const char* buffer, size_t len) {
        size_t offset = 0;
        while (len) {
            size_t written = fwrite(buffer + offset, 1, len, fp);
            len -= written;
            offset += written;
        }
    }
private:
    FILE* fp;
};



#endif