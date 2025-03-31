#include<iostream>
using namespace std;
class Employee{
    private:
    string name;
    int salary;
    public:
    Employee(){}
    Employee(string n,int s){
        name=n;
        salary=s;
    }
    void setSalary(int ss){
        salary=ss;
    }
    
    void setName(string n){
         name=n;
    }
    void getinfo(){cout<<"The name of Employee is : "<<
        name<<" and he earns  "<<salary<<"pkr"<<endl;}
    };
    int main(){
        Employee e1;
        Employee e2("Ahmed",500);
        e1.setName("hammad");
        e1.setSalary(900);
        e1.getinfo();e2.getinfo();

    }

