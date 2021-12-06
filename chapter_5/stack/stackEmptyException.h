#ifndef STACKEMPTYEXCEPTION
#define STACKEMPTYEXCEPTION


#include "../../chapter_2/RuntimeException.h"


class StackEmpty : public RuntimeException {  // StackEmpty exception handling class implementation
    public:
        StackEmpty(const string& err) : RuntimeException(err) {}
};



#endif
