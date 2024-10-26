#include<iostream>
using namespace std;
int main()
{

    float a,b,c;
    cout<<"enter first number\n";
    cin>>a;
    cout<<"enter Second number\n";
    cin>>b;
    cout<<"enter third number\n";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<a;
    }
    else if (b>a && b>c)
    {
        cout<<b;
    }
else if (c>a && c>b)
{
    cout<<c;
 
}
return 0;

}
