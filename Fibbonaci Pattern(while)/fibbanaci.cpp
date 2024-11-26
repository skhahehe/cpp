#include<iostream>
using namespace std;
int main()
{

int n;
int  i=1,term1=0,term2=1,term=0;
cout<<"How many terms do you want \n";
cin>>n;
cout<<term1<<","<<term2;
while (i<=n-2)
{
    term=term1+term2;
    term1=term2;
term2=term;
i++;
cout<<","<<term;
}


}