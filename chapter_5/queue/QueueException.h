#ifndef QUEUEEXCEPTION_H
#define QUEUEEXCEPTION_H

#include "../../chapter_2/RuntimeException.h"

class QueueEmpty : public RuntimeException {            // Exception Class to handle Queue Empty Exceptions
    public:
        QueueEmpty(const string& msg): RuntimeException(msg) {} 
};


class QueueFull : public RuntimeException {            // Exception Class to handle Queue Full Exceptions
    public:
        QueueFull(const string& msg): RuntimeException(msg) {} 
};

#endif
