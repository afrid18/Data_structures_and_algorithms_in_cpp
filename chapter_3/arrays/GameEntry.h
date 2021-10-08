//GameEntry Class definition
#ifndef GAMEENTRY_H

#define GAMEENTRY_H



using namespace std;
class GameEntry {
    public:
        GameEntry(const string& n="", int s = 0);
        string getName() const;
        int getScore() const;

    private:
        string name;
        int score;
};


#endif
