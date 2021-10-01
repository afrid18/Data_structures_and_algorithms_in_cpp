// Public memeber functions of GameEntry class
#include <string>
#include "GameEntry.h"

GameEntry::GameEntry(const string& n, int s) : name(n), score(s) {}
int GameEntry::getScore() const {
    return score;
}
string GameEntry::getName() const {
    return name;
}
