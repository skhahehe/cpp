#include<iostream>
using namespace std;
class hpms
{

public:
 string name;
 int age;
 int room_number;
 string mecicalHistory;
 string* history;


 hpms(string n ,int a,int rmn,string h){name=n;
age=a;
room_number=rmn;history = new string [1];history[0]=h;}
~hpms(){delete[] history;
cout<<"Destructor called ";}
void display(){cout<<"Patient's record is \n"<<"name:  "<<name<<endl;
    cout<<"Age :  "<<age<<endl;
cout<<"Room number :  "<<room_number<<endl;
cout<<"Patient Disease:  "<<history[0]<<endl;}
};
int main(){
    hpms patient1("ali",07,420,"Liver Infeection");
    patient1.display();
}


