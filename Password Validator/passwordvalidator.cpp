#include<iostream>
using namespace std;
int main()
{
    string password;
    string input;
    cout<<"Set password:\n";
    cin>>password;
    cout<<"Input password:\n";
    cin>>input;
    if (input==password)
    {
        cout<<"Access Granted\n";
    }
    else {cout<<"access denied\n";}
}