#include<iostream>
using namespace std;
class circle{
    public:
    double radius;
    circle(double r):radius(r){}
    double changeRadius(double r){radius=r;cout<<"radius changed function called\n";}
    double area() const{return (3.14*radius*radius);}
};
int main(){circle circ(5);
circ.changeRadius(7);
cout<<"Area of circle is :"<<circ.area();cout<<"\nConstant function called\n";}