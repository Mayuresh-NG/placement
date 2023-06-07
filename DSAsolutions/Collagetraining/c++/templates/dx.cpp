#include<iostream>
using namespace std;

//typename:keyword of template
//template:allow member function, parameter, it is parametrised classes, collection of parameterised classes
//Wap to find large number by using template class

//template syntax

//functions
template<class A>
A add(A a, A b)
{
    return a+b;
}

template<class B>
B sub(B a, B b)
{
    return a-b;
}

template<class C>
C mul(C a, C b)
{
    return a*b;
}

template<class D>
D divi(D a, D b)
{
    return a/b;
}

int main()
{
    int a,b;
    cin>>a>>b;
    
    cout<<add(a,b)<<endl;
    cout<<sub(a,b)<<endl;
    cout<<mul(a,b)<<endl;
    cout<<divi(a,b)<<endl;
    
    return 0;
}