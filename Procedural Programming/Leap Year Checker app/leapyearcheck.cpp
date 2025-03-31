#include<iostream>
using namespace std;
int main()
{
    int a,b,c; 
    int Leapyear;
    cout<<"Enter the Year:" <<endl;
    cin>>Leapyear;  
if (Leapyear % 4 == 0 )
{
    a=1;
}
else{ a=0 ;}
if (Leapyear % 400 == 0)
{b=1;}
else {b=0;}
if ( Leapyear %  100 != 0 )
{
    c=1;
}
else
{
    c=0;
}
if (a==1 && b==1 && c==1)
{
    cout<<" it is a Leapyear ";
}
else
{
    cout<<" It is not a leapyear ";
}

}