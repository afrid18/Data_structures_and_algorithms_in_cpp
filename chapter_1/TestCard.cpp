#include <vector>
#include "CreditCard.h"

using namespace std;

void testCard() {
    vector<CreditCard*> wallet(10);
    wallet[0] = new CreditCard("1234", "Afrid", 123);
    wallet[1] = new CreditCard("1235", "Asifa", 124);
    wallet[2] = new CreditCard("1236", "Arshad", 125);

    for (int j = 1; j <= 16; j++) {
        wallet[0] -> chargeIt(double(j));
        wallet[1] -> chargeIt(2 * j);
        wallet[2] -> chargeIt(double(3 * j));
    }

    cout << "Card payments:\n";
    for (int i = 0; i < 3; i++) {
        cout << *wallet[i] ;
        while (wallet[i] -> getBalance() > 100.0) {
            cout << "New balance = " << wallet[i] -> getBalance() << "\n";
        }
        cout << "\n";
        delete wallet[i];
    }
}

int main() {
    testCard();
    return EXIT_SUCCESS;
}
