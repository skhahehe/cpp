#include<iostream>
using namespace std;
class Prod{
    public:
    int id;
    float prrice;
    Prod(int i,float p){id=i;
    prrice =p;}
    Prod(const Prod &item){
        cout<<"product copied/n";id=item.id;
    prrice=item.prrice;
    }

void display(){cout<<"product id:  "<<id<<endl;
cout<<"Product price:  "<<prrice<<endl;}};
Prod createProduct(int i,float p){Prod p1(i,p);
cout<<"original product created\n";
return p1;}
int main(){Prod p2=createProduct(101,335);

p2.display();}