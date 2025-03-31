#include<iostream>
using namespace std;
int main()
{
int actualprice;
float discountprice;
int discount;
int discountpercentage;

cout<<"Enter Discount %\n";
cin>>discountpercentage;

cout<<"Enter actual price \n";
cin>>actualprice;

discountprice= actualprice - ( actualprice * (discountpercentage/100.0));
cout<<"Discounted price \n"<<discountprice;
}
