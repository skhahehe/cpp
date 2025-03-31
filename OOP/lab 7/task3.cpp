#include<iostream>
using namespace std;
class shape{
    public: 
        void draw()
        {
            cout<<"A rectangle is Created";
        }
};
class rectangle:public shape{
    public :
    int length,width;
};
class coloredRectangle:public rectangle{
    public : 
    string color;
    void set(int a ,int b,string c)
    {length=a,width=b,color=c;}
    void disp()
    {cout<<"The length of rectangle is "<<length<<endl;
    cout<<"the width of rectangle is "<<width<<endl;
cout<<"The color of rectangle is "<<color<<endl;}};
    int main(){
        coloredRectangle cr;
         cr.set(15,20,"blue");
         cr.disp();
}
