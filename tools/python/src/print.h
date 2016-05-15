#ifndef DLIB_PYTHON_PRINTING_H__
#define DLIB_PYTHON_PRINTING_H__

#include <dlib/python.h>
#include <algorithm> // min
#include <iosfwd> // streamsize
#include <boost/iostreams/categories.hpp> // sink_tag
#include <boost/iostreams/stream.hpp> // stream
#include <boost/format.hpp> // format

class pysys_stdout_sink {
public:
    std::streamsize write(const char* s, std::streamsize n);

    typedef char char_type;
    typedef boost::iostreams::sink_tag category;
};

#endif // DLIB_PYTHON_PRINTING_H__
