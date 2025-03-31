#include<iostream>
using namespace std;
int main()
{

    float digit1,digit2,answer;
    char operation;

    cout<<"enter the first number \n";
    cin>>digit1;
    cout<<"enter the second number \n";
    cin>>digit2;
    cout<<"for multiplication use 'x' \n";
    cout<<"for subtraction use '-' \n";
    cout<<"for division use '/' \n";
    cout<<"for addition use '+'\n";

    cout<<"What function do you want to perform \n";
    cin>>operation;
    
    switch (operation)
    {
    case '+':
        answer=digit1+digit2;
        cout<<"The sum of given statement is "<<answer;

        break;
    case  '-':
        answer=digit1-digit2;
        cout<<"The difference of given statement is "<<answer;

        break;
        case 'x':
        answer=digit1*digit2;
        cout<<"The prodcut of given statement is "<<answer;

        break;
        case '/':
        if (digit2 != 0)
        {
        answer=digit1/digit2;
        cout<<"The divison of given statement is "<<answer;
        }
        else
        {cout<<"Not divisble by zero";}
        
        
        
    default:
    cout<<"invalid operation";
        break;
    }

return 0;
}