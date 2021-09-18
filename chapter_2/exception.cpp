#include <iostream>

using namespace std;


// MathException class to perform exception catching
class MathException {
    public:
        MathException(const string& err)
            : errMsg(err) {}
        string getError() { return errMsg + "\n"; }
    private:
        string errMsg;
};

// ZeroDivide exception class that has inherited MathException class
class zerodivide : public mathexception {
    public:
        zerodivide(const string& err)
            : errmsg(err) {}
};

// NegativeRoot exception class that has inherited MathException class

class NegativeRoot: public mathexception {
    public:
        NegativeRoot(const string& err)
            : errmsg(err) {}
};

int main(void) {
    MathException merror("Some Mathematical Error DUDE");
    cout << merror.getError();
    return 0;
}
