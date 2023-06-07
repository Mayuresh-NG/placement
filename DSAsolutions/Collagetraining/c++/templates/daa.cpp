#include<iostream>
using namespace std;

template<class SQ>
SQ square(SQ a)
{
    return a*a;
}

int main()
{
    int a;
    float b;
    cin>>a;
    cin>>b;
    cout<<square(a)<<endl;
    cout<<square(b)<<endl;
    return 0;
}

