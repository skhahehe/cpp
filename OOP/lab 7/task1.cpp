#include<iostream>
using namespace std;
class Device{
    public:
    
void brand(){
    cout<<"The brand of this phone is Apple\n";
}};
class TouchScreen{
    public:
void TouchType()
{
    cout<<"Touch type is multi DPI touch\n";
}};
class smartphone:public Device,public TouchScreen{
    public:void newP()
    {
        cout<<"I got a new phone \n";
    }};
int main(){
    smartphone apple;
    apple.newP();
    apple.brand();
    apple.TouchType();
}