#include<iostream>
using namespace std;
class calculator
{

public:
    double a,b;
    
    calculator(double num1,double num2)
   { a=num1;b=num2;}

   void add(){cout<<"sum of "<<a<<" and "<<b<<" is:\n"<<(a+b)<<endl;}
   void subt(){cout<<"difference of "<<a<<" and "<<b<<" is:\n"<<(a-b)<<endl;}
   void div(){if (b!=0)
   {
    cout<<"Division of "<<a<<" and "<<b<<" is:\n"<<(a/b)<<endl;
   }
   else
   {
cout<<"\nSecond value is zero!Divison not possible";
   }
}
   void mult(){cout<<"Product of "<<a<<" and "<<b<<" is:\n"<<(a*b)<<endl;}
 };
 
 int main(){
int a,b;
cout<<"Enter First Number\n";
cin>>a;
cout<<"Enter Second Number\n";
cin>>b;
calculator calc(a,b);
int opt;
cout<<"What do You want to do?\n";
cout<<"1.Sum \t        2.Subtract"<<endl;
cout<<"3.Divide \t4.Multiply\n";
cin>>opt;
switch (opt)
{
case 1:
    calc.add();
    break;
case 2:
    calc.subt();
    break;
case 3:
    calc.div();
    break;
case 4:
    calc.mult();
    break;

default:cout << "Invalid option!Enter options from 1-4" << endl;
break;
    break;}}