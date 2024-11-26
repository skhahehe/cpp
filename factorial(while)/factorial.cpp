#include<iostream>
using namespace std;
int main()
{long  sum=1;
long  n;

cout<<"Enter Number for factorial: \n";
cin>>n;

long nog=n;
while(nog>=1)
{
    sum = nog*sum ;
    nog--;
   
}
 
cout<<n<<"! is "<<sum<<"\n";

}