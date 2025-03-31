#include<iostream>
using namespace std;
class rectangle{
public:
int length,width;
rectangle(){width=length=1;
}
rectangle(int x,int y){length=x;width=y;
    }
void area(){cout<<(width*length)<<endl;}


};
int main(){
rectangle rect;
rectangle rect1(5,4);
cout<<"Area of first rectangle is:";
rect.area();

cout<<"Area of second rectangle is:";
rect1.area();
}