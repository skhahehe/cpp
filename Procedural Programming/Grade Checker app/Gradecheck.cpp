#include<iostream>
using namespace std;
int main()
{
    int Percentage;
    string Grades;

    cout<<"Enter percentage \n";
    cin>>Percentage; 
    if (Percentage >=93 && Percentage <=100 )
    {
        Grades="A";
    }
    else if (Percentage>=90 && Percentage <=93)
    {
          Grades="A-";
    }
    else if (Percentage>=87 && Percentage<=90)
    {
        Grades="B+";
    }
    else if (Percentage>=83 && Percentage<=87)
    {
        Grades="B";
    }
    else if (Percentage>=80 && Percentage<=83)
    {
        Grades="B-";
    }
    else if (Percentage>=77 && Percentage<=80)
    {
        Grades="C+";
    }
    else if (Percentage>=73 && Percentage<=77)
    {
        Grades="C";
    }
    else if (Percentage>=70 && Percentage<=73)
    {
        Grades="C-";
    }
    else if (Percentage>=67 && Percentage<=70)
    {
        Grades="D+";
    }
    else if (Percentage>=63 && Percentage<=67)
    {
        Grades="D";
    }
    else if (Percentage>=60)
    {
        Grades="D-";
    }
    else
    {
       Grades="F";
    }
     cout<<"Grades:" <<Grades <<endl;
return 0;
    

}