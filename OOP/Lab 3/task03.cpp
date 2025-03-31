#include<iostream>
using namespace std;
class bank{
public:
int accountnumber;
double balance;


bank():accountnumber(0),balance(0.0){
    cout<<"By using default constructor balance is "<<balance<<endl;
}
bank(int acc,double dep):accountnumber(acc),balance(dep){
    cout<<"By parrameterized/custom constructor we changed the balance and account number to:\n"<<"Account number :"<<acc
    <<"       balance:"<<dep;
}
};
int main(){

    int a;
    double b;
    cout <<"Enter your account number :\n";
    cin>>a;
    cout<<"Enter your Balance:\n";
    cin>>b;
    bank();
    bank(a,b);

}