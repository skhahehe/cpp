#include<iostream>
using namespace std;
class car
{

public:
    
    string brand;
    double year;
    car(string b,double y):brand(b),year(y){}
    ~car(){cout<<"\nCar object was destroyed from memory";}
    void show(){cout<<"The car is of Brand "<<brand<<".\nMy perferred model was of "<<year;}

};
int main(){
    string a;
    double b;
    cout<<"Which car do you want?\n";
    cin>>a;
    cout<<"Which Year's Model?\n";
    cin>>b;
    car cz(a,b);
    cz.show();
}

