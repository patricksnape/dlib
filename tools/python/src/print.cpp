#include "print.h"
#include <stdio.h>


std::streamsize pysys_stdout_sink::write( const char* s, std::streamsize n ) {
    // PySys_WriteStdout truncates to 1000 chars
    static const std::streamsize MAXSIZE = 1000;
    std::streamsize written = std::min( n, MAXSIZE );
    PySys_WriteStdout((boost::format("%%.%1%s") % written).str().c_str(), s);
    fflush(stdout);
    return written;
}