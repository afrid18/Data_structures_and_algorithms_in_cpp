
//GameEntry Class definition
class GameEntry {
    public:
        GameEntry(const string& n="", int s = 0);
        string getName() const;
        int getScore() const;

    private:
        string name;
        int score;
};

// Public memeber functions of GameEntry class

GameEntry::GameEntry(const string& n="", int s = 0) : name(n), score(s) {}
string GameEntry::getScore() const {
    return score;
}
int GameEntry::getName() const {
    return name;
}


// Scores class definition

class Scores {
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry e);
        GameEntry remove(int i) throw(IndexOutOfBound);

    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;
};

// Public member functions of score class

Scores:Scores(int maxEnt) {
           maxEntries = maxEnt;
           entries = new GameEntry[maxEntries];
           numEntries = 0;
       }

Scores::~Scores() {
    delete[] entires;
}

void Scores::add(GameEntry& e) {
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

void Scores::remove(int i) throw(IndexOutOfBounds) {
    if ((i < 0) || (i >= numEntries)) 
        throw IndexOutOfBounds("Invalid index");
    GameEntry e = entries[i];
    for(int j = i + 1; j < numEntries; ++j) {
        entries[j - 1] = entries[j];
    }
    numEntries--;
    return;
}
