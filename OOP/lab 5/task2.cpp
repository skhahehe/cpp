#include<iostream>
using namespace std;
class Lib{
    public:
   string title;
   float price; 
   Lib(){};
   Lib (Lib& x){title=x.title; price=x.price; cout<<"User defined copy constructor called"<<endl;}

void display(){cout<<"Book's name :  "<<title<<endl;
cout<<"Book's Price :  "<<price<<endl;}

};
int main(){
    Lib book1;
book1.title="ten";
book1.price=50;
book1.display();
Lib book2(book1);
book2.display();}