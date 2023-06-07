#include<iostream>
using namespace std;

// int area(int l,int b)
// {
//     return l*b;
// }

// int area(int r)
// {
//     return 3.14 * r * r;
// }

// int area(int l,int b,int h)
// {
//     return l*b*h;
// }

// int main()
// {
//     std::cout<<"\n"<<area(2,5);
//     std::cout<<"\n"<<area(2);
//     std::cout<<"\n"<<area(2,5,4);
//     return 0;
// }

//wap to replace every 0,s with 1
//sample 1010
//output 1111
int main()
{
    
int num;
cin>>num;

string s = to_string(num);

for(int i=0;i<s.length();i++)
{
    if(s[i]=='0')
    {
        s[i]='1';
    }
}
for(int i=0;i<s.length();i++)
{
    cout<<s[i];
}

return 0;
}