//GameEntry Class definition
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
