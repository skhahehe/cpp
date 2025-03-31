#include<iostream>
using namespace std;
class Person{
    public:
    string *name;
    Person(string n){name=new string(n);}
    Person(const Person &p){name=new string(*p.name);
    cout<<"Deep copy initiated "<<endl;}
    void nme_shw(){cout<<"  "<<*name<<endl;}
    ~Person(){delete name;
    cout<<"memory freed";}
};
int main(){

    Person p1("Ahmed");
    Person p2(p1);
    cout<<"original object of person:  ";p1.nme_shw();
    cout<<"deep Copied object of person is";p2.nme_shw();
}