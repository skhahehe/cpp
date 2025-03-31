#include<iostream>
using namespace std;
class bankaccount{
public:
float accountnumber,balance;

bankaccount(){balance=0.0;}
bankaccount(float bn,float bal){accountnumber=bn ;balance=bal;}
void display(){cout<<"Account number is:"<<accountnumber<<endl;
    cout<<"balance is :"<<balance<<endl;
}

};
int  main(){
    bankaccount obj1;
    bankaccount obj2(1234,12300) ;
obj1.display();
obj2.display();
}