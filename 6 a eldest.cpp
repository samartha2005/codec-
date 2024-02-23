#include <iostream>
#include <string>
using namespace std;
class Person {
    string name;
    float age;
public:
    Person(string n, float a) : name(n), age(a) {}
    string getName() const {
        return name;
    }
    float getAge() const {
        return age;
    }
    static const Person* eldest(const Person* p1, const Person* p2) {
        return (p1->age > p2->age) ? p1 : p2;
    }
};
int main() {
    Person persons[] = { {"Sweta", 25.0}, {"Sadaf", 35.0}, {"Kubra", 32.0} };
    const Person* eldestPerson = &persons[0];
    for (int i = 1; i < sizeof(persons) / sizeof(persons[0]); ++i) {
        eldestPerson = Person::eldest(eldestPerson, &persons[i]);
    }
    cout << "The eldest person is: " << eldestPerson->getName() <<" "<< " age " << eldestPerson->getAge() << " years." << endl;
    return 0;
}

