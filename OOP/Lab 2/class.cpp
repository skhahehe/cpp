using namespace std;

#include<iostream>
using namespace std;
class Car {
private:
    
public:
string brand;
string model;
double year;
    Car(string br, string mke, double yer) {
 brand = br;     
   model = mke;
  year = yer;
    }
void displayDetails() {
        cout << "Car Info" << endl;
        cout << "Brand of car is: \n" << brand << endl;
        cout << "Model of car is: \n" << model << endl;
        cout << "Year of car is : \n" << year << endl;
    }
};
int main() {
    string make,brand;
double yaer;
cout<<"what is your dream car Brand:\n";
cin>>brand;
cout<<"Which Model Of "<<brand<<" Was best :\n";
cin>>make;
cout<<"Which year was it made?\n";
cin>>yaer;
    Car Shapar(brand,make,yaer);
    Shapar.displayDetails();
    return 0;
}