#include<iostream>
using namespace std;
int deposit(double *ptr1){
    double a; 
    cout<<"How Much do you want to Deposit\n";
     cin>>a;
    *ptr1 +=a;
    cout<<"You have successfully Deposited "<<a<<"Rs.\n new amount is "<<
    *ptr1<<" Rs.\n";
    return *ptr1;

}
int withdraw(double *ptr1 ){
    double a; 
    cout<<"How Much do you want to withdraw\n";
     cin>>a;
     if (a<*ptr1)
     {
        *ptr1 -=a;
        cout<<"You have successfully Withdrawed "<<a<<" Rs.\n new amount is "<<
        *ptr1<<" Rs.\n";
     }
     else
{cout<<"amount Is larger than in account\n";}     
    
    return *ptr1;
}


int main(){
int x;
double balance=30000;
double *ptr1=&balance;
    do
    {
       cout<<"What do you want to do?\n";
       cout<<"1.Deposit Amount                2.Withdraw Amoount\n";
       cout<<"3.Check Balance                 4.Exit\n";
cin>>x;
switch (x)
{
case 1:
    deposit(ptr1);
    break;
case 2:
withdraw(ptr1);
break;
case 3:
cout<<"Current Balance is "<<balance<<endl;   
break;
case 4:
cout << "Exiting the program.\n";
   break;   
     default:
     cout << "Invalid option. Please try again.\n";
       break;
}
       
    } while (x!=4);
}
