#include<iostream>
#include<cstdlib>

using namespace std;
int main()
{srand(time(0));
    int randomNum = rand() % 10 + 1    ;
     int number;
     cout<<"Enter a number from 1-10: \n";
     cin>>number;
     
     if (number==randomNum)
     {
     cout<<"You won a 10000$";
     }
     else
     {
        cout<<"Womp Womp. you lost";
     }
     
}