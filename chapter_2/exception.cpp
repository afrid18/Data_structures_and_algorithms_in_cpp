#include <iostream>

using namespace std;


// MathException class to perform exception catching
class MathException {
    public:
        MathException(const string& err)
            : errMsg(err) {}
        string getError() { return errMsg + "\n"; }
    private:
        string errMsg = "Some MathCalculation Exception!";
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
        int number = -144;
        if (number < 0)
            throw NegativeRootError("LoL 🤣🤣 You are trying to perform negative square root of a number!");
    }
    catch(zeroDivideError zde) {
        cout << zde.getError() << endl;
    }
    catch(NegativeRootError nre) {
        cout << nre.getError();
    }
    return 0;
}
