#include<bits/stdc++.h>
using namespace std;

// int  main()
// {
//     int pos;
//     int steps;
//     cin>>pos;
//     int quot=pos/5;
//     if(pos%5==0)
//     {
//         cout<<quot;
//     }
//     else if(pos%5!=0)
//     {
//         steps = quot + 1;
//         cout<<steps;
//     } 
//     return 0;
// }

int main()
{
    int code;
    cout<<"Enter code: ";
    cin>>code;
    int sum;
    int m;

    int flag = 0;

    while (code>0)
    {
        if(flag==0)
        {
            flag=1;
            m=code%10;
            sum=0;
        }
        if(flag==1)
        {
            m=code%10;
            sum+=m*m;
            code=code/10;
        }
        
    }

    if(sum%11==0)
    {
        cout<<"Valid";
    }
    else cout<<"invalid";
    return 0;
}