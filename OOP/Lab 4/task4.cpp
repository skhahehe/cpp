#include<iostream>
using namespace std;
class student{


    public:
    string name;
    float marks;

student(string n,float m){
    cout<<"copy constructor called\n";
    name=n;marks=m;
}


};
int main(){

    student num1("hammad",10);
    student num2=num1;
    cout<<"name of first object's student is "<<num1.name<<endl;
    cout<<"marks of first object's student is "<<num1.marks<<endl;
    cout<<"name of second object's student is "<<num2.name<<endl;
    cout<<"marks of second object's student is "<<num2.marks<<endl;
}