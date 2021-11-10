// RuntimeException class for Exception handling as there is no way to handle runtime exception 
// in CPP we create a default RuntimeException class to help us handle RuntimeExceptions
//

#ifndef RUNTIMEEXCEPTION_H
#define RUNTIMEEXCEPTION_H

#include <iostream>

using namespace std;


class RuntimeException {
    private:
        string errMsg;

    public:

        RuntimeException(const string err): errMsg(err) {}

        string getMessage() const {
            return errMsg;
        }
};



#endif
