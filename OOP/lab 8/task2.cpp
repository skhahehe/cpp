#include<iostream>
using namespace std;
class student{
    private:
    string name,grades;
    public:
    student(string n,string g){
        name=n;
        grades=g;
    }
    void setName(string n){
        name=n;
    }
    void setGrade(string G){
        grades=G;
    }
    void getInfo(){
        cout<<"name of student is : "<<name
        <<" .The student got "<<grades<<" grade"<<endl;
    }

};
int main(){

    student s1("sarmad","A+");
    student s2("Muneeb","A+");
    s1.getInfo();
    s1.setGrade("B-");
    s1.getInfo();
    s2.getInfo();
    
}
