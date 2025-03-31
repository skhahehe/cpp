#include<iostream>
using namespace std;


class rectangle{
public:
double length;
double width;
rectangle():length(4.5),width(4.5){cout<<"Area is "<<(length*width)<<endl;
cout<<"using default constructor\n";}
rectangle(double l,double w):length(l),width(w){cout<<"Area is "<<(length*width)<<endl;
    cout<<"using Custom/parameterized constructor";}




};
int main(){



    double a,b;
    cout<<"Enter length\n ";
    cin>>a;
    cout<<"Enter width \n";
    cin>>b;
    rectangle rect1; 
    rectangle rect2(a, b); }