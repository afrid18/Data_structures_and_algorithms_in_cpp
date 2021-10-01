#include <iostream>
#include "GameEntry.h"
#include "Scores.h"
using namespace std;

int main(void) {
    GameEntry afrid("Afrid", 10);
    //cout << e.getName() << endl;
    //cout << e.getScore() << endl;

    GameEntry mohith("Mohith", 100);
    GameEntry neon("Neon", 110);
    GameEntry sushanth("sushanth", 130);
    GameEntry sharaz("Sharaz", 1000);
    
    Scores toppers;
    toppers.add(afrid);
    toppers.add(mohith);
    toppers.add(neon);
    toppers.add(sushanth);
    toppers.add(sharaz);
    toppers.printScores();
    cout << toppers.numEnt() << endl;
    return 0;
}
