#include<iostream>

using namespace std;
int main()
{
int number;

cout<<"Enter Your Number from 1-10: \n";
cin>>number;
if (number<=10 && number>=1)
{
switch (number)
{
case (7):
    cout<<"7 coroooooorreeeeeeee";
    break;

default:
cout<<"Better Luck next time";
    break;
}
}
else
{
    cout<<"Number out of range";
};



}