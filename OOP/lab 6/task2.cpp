#include<iostream>
using namespace std;
class rectangle{
    public:
    const int width;
    int height;
    rectangle(int w,int h):width(w),height(h){};
    int area(){return width*height;}
    void show(){cout<<"Area of rectangle is :"<<area();}
};
int main(){rectangle rect(2,2);
rect.show();}