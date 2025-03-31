#include<iostream>
using namespace std;
int main()
{
    int Lowlimit,Highlimit,Num;
    cout<<"Limit Starts From:\n";
    cin>>Lowlimit;
    cout<<"Limit Ends At:\n";
    cin>>Highlimit;
    cout<<"Enter Your Number:\n";
    cin>>Num;

    if (Num>Lowlimit && Num<Highlimit)
    {
        cout<<"It is in Your Prescribed range";
    }
    else{cout<<"it is out of range";}
    
    
}