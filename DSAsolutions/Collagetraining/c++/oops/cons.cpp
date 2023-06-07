#include<iostream>
using namespace std;

class student
{
    public:
        string name;
        int marks;
        string grade;

        student(string n,int m,string g)
        {
            name=n;
            marks=m;
            grade=g;
            cout<<"\nName:"<<n<<"\nMarks: "<<m<<"\nGrade: "<<g;
        }
};

int main()
{   
    student s("Mayuresh",50,"B");
    student s1("Jay",50,"B");
    return 0;
}


