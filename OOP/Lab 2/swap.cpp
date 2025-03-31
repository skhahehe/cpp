#include<iostream>
using namespace std;
void swap(int*a,int*b){
int temp=*a;
*a=*b;
*b=temp;
}
int main(){


    int a ,b;
    cout<<"Enter First Number\n";
cin>>a;
cout<<"Enter Second number\n";
cin>>b;
cout<<"Unmodified first value is "<<a<<" and second value is "<<b<<endl;
swap(&a,&b);
cout<<"Modified first value is "<<a<<" and second value is "<<b<<endl;
}