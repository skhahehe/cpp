#include<iostream>
using namespace std;
int main()
{long  sum=1;
long  n;
cout<<"Enter Number for factorial: \n";
cin>>n;

for (int i = n; i >= 1; --i)
{
    sum *= i ;
   
}
 
cout<<n<<"! is "<<sum<<endl;

}