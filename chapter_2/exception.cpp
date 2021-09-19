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
class zeroDivideError : public MathException {
    public:
        zeroDivideError(const string& err)
            : MathException(err), errMsg(err) {}
    private:
        string errMsg;
};

// NegativeRoot exception class that has inherited MathException class

class NegativeRootError: public MathException {
    public:
        NegativeRootError(const string& err)
            : MathException(err), errMsg(err) {}
    private:
        string errMsg;
};

int main(void) {
    try {
        int divisor = 0;
        if (divisor == 0)
            throw zeroDivideError("Trying to divide by 0");
    }
    catch(zeroDivideError zde) {
        cout << "HAha dividing by zero 🤣" << endl;
    }
    return 0;
}
