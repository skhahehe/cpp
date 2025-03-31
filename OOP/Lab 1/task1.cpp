#include<iostream>
using namespace std;



int main(){
    int arr[3];
    for (int i = 0; i <= 2; i++)
    {
    cout<<"Enter Integer no "<<(i+1)<<endl;
    cin>>arr[i];}
    int a=arr [0];;
    for (int i = 0; i <= 2; i++)
    if (a<arr[i])
    {a=arr[i];}
    cout<<"The largest number amongst the three provided values is "<<a;
    }
