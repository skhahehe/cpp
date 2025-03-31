#include<iostream>
using namespace std;
int  main()
{
    char word;
       cout<<"Enter The Word:\n";
       cin>>word;
       if (word=='a'||word=='e'||word=='i'||word=='o'||word=='u'||word=='A'||
       word=='E'||word=='I'||word=='O'||word=='U')
       {
        cout<<"This is a vowel";
       }
       else {cout<<"this is a consonant";}
       return 0;
       
 
}