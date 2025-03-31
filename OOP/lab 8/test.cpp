#include<iostream>
using namespace std;
class Student{
    private:
    double GPA;
    int rollNumber;\
    public:
    string name;
    Student(string n){name=n;}
    void setRollNumber(int r){if (r<0)
    {
        cout<<"Roll Number should be a positive number";
    }else
    {rollNumber=r;}}
    void setGPA(double g){if (g>0.0 && g<4.0)
    {
        GPA=g;
    }
    else {cout<<"value not possible for GPA";}
    }
    void StudentDetails(){cout<<"The name of Student is : "<<name<<
        "\n bearing roll number "<<rollNumber<<" \n having GPA "<<GPA<<endl;}
};
int main()
{Student s1("ali");
    s1.setRollNumber(123456);
    s1.setGPA(3.2);
    s1.StudentDetails();

    return 0;
}