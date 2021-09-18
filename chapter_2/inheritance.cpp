#include <iostream>

using namespace std;
class Person {
    private:
        int ID;
        string name;
    public:
        Person(int id, string name0);
        int getID() const {return ID;}
        string getname() const {
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
        int getGY() const { return gradYear; }
        string getMajor() const {return major;}
};

Student::Student(int id, string name0, string mjr, int gy) :
    Person(id, name0),
    major(mjr),
    gradYear(gy) {}

// Prototypes

void display(const Student&);


int main(void) {
    Student santosh(101, "Santosh", "CSE", 2023);
    Student* sushanth = new Student(102, "Sushanth", "CSE", 2023);
    display(*sushanth);
    display(santosh);
    return 0;
}

void display(const Student& s) {
    cout << s.getID() << endl;
    cout << s.getname()<< endl;
    cout << s.getMajor() << endl;
    cout << s.getGY() << endl;
}
