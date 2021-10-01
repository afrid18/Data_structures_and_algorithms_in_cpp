// Public member functions of score class
#include <iostream>
#include <exception>
#include "GameEntry.h"
#include "Scores.h"

Scores::Scores(int maxEnt) {
           maxEntries = maxEnt;
           entries = new GameEntry[maxEntries];
           numEntries = 0;
       }

Scores::~Scores() {
    delete[] entries;
}

void Scores::add(const GameEntry& e) {
    int newScore = e.getScore();
    if(numEntries == maxEntries) {
        if(newScore <= entries[maxEntries - 1].getScore()) return;
    }
    else numEntries++;

    int i = numEntries - 2;
    while (i >= 0 && newScore > entries[i].getScore()) {
        entries[i+1] = entries[i];
        i--;
    }
    entries[i+1] = e;
}

GameEntry Scores::remove(int i) {
    try {
        if ((i < 0) || (i >= numEntries)) 
            throw "Invalid index";
    }
    catch (const char* e) {
        cout << " IndexOutOfBound" << endl;
    }
    GameEntry e = entries[i];
    for(int j = i + 1; j < numEntries; ++j) {
        entries[j - 1] = entries[j];
    }
    numEntries--;
    return e;
}

void Scores::printScores() {
    cout << "Top Player's List" << endl;
    for(int i = 0; i < numEntries; ++i) {
        cout << "Name: " << entries[i].getName() << "\t\t\tscore: "<< entries[i].getScore() << endl;
    }
    return;
}

int Scores::numEnt() {
    return numEntries;
}
