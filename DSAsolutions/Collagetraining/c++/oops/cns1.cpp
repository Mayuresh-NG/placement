//area of rectangle using ccon and decon

#include<iostream>
using namespace std;

class area
{
    public:
    int length; 
    int breadth;
    int ar;
        area(int len,int bred)
        {
            length = len;
            breadth = bred;
            ar = len*bred;
            display(ar);
        }
        ~area(){cout<<"\nDestroyed";}
        void display(int area);
};

void area::display(int area)
{
    cout<<"\narea is"<<area;
}

int main()
{
    int l,b;
    cin>>l;
    cin>>b;

    area a(l,b);

    return  0;
}


