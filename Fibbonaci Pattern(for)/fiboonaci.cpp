#include<iostream>
using namespace std;
int main()
{ 
    
    int n ;
    int term1=0,term2=1,term=0;
    cout<<"how many terms do you want \n";
    cin>>n;
cout<<term1<<","<<term2;
for (int i = 1; i <= n-2; i++)
{
    term=term1+term2;
    term1=term2;
    term2=term;
    cout<<","<<term;
}



}