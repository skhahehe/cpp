#include<iostream>
using namespace std;
int main()
{
    float a,b;
    float sum;
    float multiply;
    float divide;
    float minus;
    int menu;
    cout<<"Enter first number:\n";
    cin>>a;
    cout<<"Enter Second Number:\n";
    cin>>b;
    sum=a+b;
    multiply=a*b;
    divide=a/b;
    minus=a-b;
    cout<<"1. Sum \t         2. Subtract\n \b3.multiply \t 4.Divide"<<endl;
    cin>>menu   ;
        if (menu==1)
        {cout<<"sum=\n"<<sum <<endl;}
        if (menu==2)
        {cout<<"subtract\n"<<minus <<endl;}
        if (menu==3)
        {cout<<"Product=\n"<<multiply <<endl;}
        if (menu==4)
        {cout<<"Remainder=\n"<<divide <<endl;}
        return 0;
        }