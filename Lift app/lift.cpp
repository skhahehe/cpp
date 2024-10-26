#include<iostream>
using namespace std;
int main()
{
    int People;
    int level;
    int a,b;
    cout<<"press button for level:\n";
    cin>>level;
    if (level < 6 && level >0 )
    {
        a=1;
        
     
    }
     else{a=0;}
     cout<<"how many people : \n";
     cin>>People;
     if (People<11)
     {

        b=1;
     }
     else{b=0;
     }
     if (a==1 && b==1)
     {cout<<" You are on level ="<<level<<endl;
     }
     else{cout<<" not possible \a";}
     
}
