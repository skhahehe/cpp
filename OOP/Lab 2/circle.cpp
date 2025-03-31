#include<iostream>
using namespace std;
struct circle
{
    double radius;
};
int area(double radius){
    return 3.14*radius*radius;
}

int main(){
circle c;
    cout<<"Enter Radius\n";
    cin>>c.radius;
    double carea=area(c.radius);
    cout<<"Area  of circle is "<<carea;;
}