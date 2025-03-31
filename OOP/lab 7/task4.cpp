#include<iostream>
using namespace std;
class Employee
{
    public:
    string name;
    int salary;
};
class Manager:public Employee
{public:
   void setN(string s,int a){name=s,salary=a;}
   void intro(){cout<<"Hi i am Manager of this company";}
   void disp(){intro();cout<<"And my name is "<<name<<" and i earn "<<salary<<endl;}
};
class Developer:public Employee
{public:
    void setN(string s,int a){name=s,salary=a;}
    void intro(){cout<<"Hi i am Developer of this company";}
    void disp(){intro();cout<<" and my name is "<<name<<" and i earn "<<salary<<endl;}
};
int main()
{
Manager m;
Developer d;
m.setN("muzammil",15000);
d.setN("zahoor",25000);
m.disp();
d.disp();
}