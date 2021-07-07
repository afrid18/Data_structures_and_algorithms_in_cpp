using namespace std;
enum MealType{NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

class Passanger {
    public:
        Passanger();
        Passanger(const string& nm, MealType mp, const string & ffn = "NONE");
        Passanger(const Passanger& pass);
        bool isFrequentFlyer() const;
        void makeFrequentFlyer(const string & newFreqFlyerNo);
        string getPassangerName();
        MealType getMeals();

    private:
        string name;
        MealType mealPref;
        bool isFreqFlyer;
        string freqFlyerNo;
};

Passanger::Passanger() {
    name = "--NO NAME--";
    mealPref = NO_PREF;
    isFreqFlyer = false;
    freqFlyerNo = "NONE";
}

Passanger::Passanger(const string& nm, MealType mp, const string & ffn) {
    name = nm;
    mealPref = mp;
    isFreqFlyer = (ffn != "NONE");
    freqFlyerNo = ffn;
}

Passanger::Passanger(const Passanger& pass) {
    name = pass.name;
    mealPref = pass.mealPref;
    isFreqFlyer = pass.isFreqFlyer;
    freqFlyerNo = pass.freqFlyerNo;
}


bool Passanger::isFrequentFlyer() const {
    return isFreqFlyer;
}

void Passanger::makeFrequentFlyer(const string & newFreqFlyerNo) {
    isFreqFlyer = true;
    freqFlyerNo = newFreqFlyerNo;
}

string Passanger::getPassangerName() {
    return name;
}

MealType Passanger::getMeals() {
    return mealPref;
}
