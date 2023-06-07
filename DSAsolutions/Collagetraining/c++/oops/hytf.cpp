//wap to print details of employee by creating class of emp , attribs id,sal,name
#include<iostream>
using namespace std;

class emp
{

public:
    int id;
    int salary;
    string name;
    emp(int i, int s,string n)
    {
        id=i;
        salary=s;
        name=n;
        display(id,salary,name);
    }
    void display(int i , int s, string n);
};

void emp::display(int i, int s, string n)
{
    cout<<"\n"<<i<<"\n"<<s<<"\n"<<n;
}

int main()
{
    emp e1(1,12000,"Mayuresh"),e2(2,1000,"Unkonwn");
    return 0;
}


