#include <iostream>

using namespace std;
class Person {
    private:
        int ID;
        string name;
    public:
        Person(int id, string name0);
        int getID() {return ID;}
        string getname() {
            return name;
        }
};

Person::Person(int id, string name0) :
    ID(id),
    name(name0) {}


class Student : public Person {
    private:
        string major;
        int gradYear;

    public:
        Student(int id, string name0, string mjr, int gy);
        int getGY() { return gradYear; }
        string getMajor() {return major;}
};

Student::Student(int id, string name0, string mjr, int gy) :
    Person(id, name0),
    major(mjr),
    gradYear(gy) {}


int main(void) {
    Student santosh(101, "Santosh", "CSE", 2023);
    cout << santosh.getID() << endl;
    cout << santosh.getname()<< endl;
    cout << santosh.getMajor() << endl;
    cout << santosh.getGY() << endl;
    return 0;
}
