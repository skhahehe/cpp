#include<iostream>
using namespace std;
class car{
    public:
    const int max_speed;
    int cur_speed;
    car(int m,int c):max_speed(m),cur_speed(c){};
    int speed() const{return cur_speed; }
void display(){cout<<"The speed of the car right at the moment is :  "<<speed();
cout<<"km/h\n and max speed is "<<max_speed<<"km/h";}
};
int main(){

    car mazda(260,45);
    mazda.display();

}