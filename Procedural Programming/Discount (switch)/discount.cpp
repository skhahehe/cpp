#include<iostream>
using namespace std;
int main()
{

int shopping,newprice;
cout<<"How much does the item cost: \n";
cin>>shopping;

int category;
if (shopping<=500)
{category=1;}
else if (shopping>500)
{category=2;}
else{category=0;};

switch (category)
{
case (1):
    cout<<"You have obtained a 5% discount \n";
    newprice=shopping-(shopping*0.05);
    cout<<"You recieved the item for "<<newprice;
    break;
case(2):
cout<<"you have earned a 10 % discount \n";
newprice=shopping-(shopping*0.1);
    cout<<"You recieved the item for "<<newprice;
default:
    break;
}
}