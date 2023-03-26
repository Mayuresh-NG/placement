
#include<iostream>
using namespace std;

void num(int *a)
{
    ++*a;
}

int main()
{
    int a = 18;
	num(&a);
    cout<<a;
    return 0;
}