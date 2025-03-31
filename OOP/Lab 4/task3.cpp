#include <iostream>
using namespace std;

class Person {
private:
    char* name; 
    int age;

public:
    Person(const char* n, int a) {
        name = new char[strlen(n) + 1];
        string name=n;           
        age = a;
    }


    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }

    
    ~Person() {
        cout << "Destructor called for " << name << endl;
        delete[] name; //
    }
};

int main() {

    Person p1("Ali", 25);
    Person p2("Ahmed", 30);


    p1.display();
    p2.display();

    
    return 0;
}
