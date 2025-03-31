#include<iostream>
using namespace std;
class vehicle
{

    
public:
    string brand;
    vehicle(string b){brand=b;}
    void display(){cout<<"brand of the car is:"<<brand<<endl;}
    
};

class car :public vehicle{
  public:  string model;
    int year;
    car(string b,string m,int y):vehicle(b) { 
        model =m;
        year=y;
    }
    void displayCar() {
        display(); 
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main(){ car first("Mercedes","Benz",2024);
    first.displayCar();

}