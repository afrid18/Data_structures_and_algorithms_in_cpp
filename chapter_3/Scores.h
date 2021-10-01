// Scores class definition

class Scores {
    public:
        Scores(int maxEnt = 10);
        ~Scores();
        void add(const GameEntry& e);
        GameEntry remove(int i);

    private:
        int maxEntries;
        int numEntries;
        GameEntry* entries;
};
