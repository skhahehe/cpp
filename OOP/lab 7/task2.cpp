#include<iostream>
using namespace std;
class person{
    public:
    int age;string name;
void set(int a,string n)
{
      age=a,name=n;
    }};
class student:public person{
     public:
     string grade;
     void gr(string g)
     {
        grade=g;
    }
void disp(){
    cout<<"Name of the student is :"<<name<<endl;
    cout<<"Age of student is "<<age<<endl;
    cout<<"Student got "<<grade<<" Grade";
}};
int main(){
    student ali;
ali.set(16,"Ali");
ali.gr("A-");
ali.disp();
}