#include "../../chapter_2/RuntimeException.h"


class StackEmpty : RunTimeException {  // StackEmpty exception handling class implementation
    public:
        StackEmpty(const string& err) : RunTimeException(err) {}
};


