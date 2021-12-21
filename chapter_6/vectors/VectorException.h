#ifndef VECTOREXCEPTION_H
#define VECTOREXCEPTION_H

#include "../../chapter_2/RuntimeException.h"

class IndexOutOfBounds: public RuntimeException {
    public:
        IndexOutOfBounds(const string msg) : RuntimeException(msg) {}
};


#endif
