#include<iostream>
using namespace std;

//WAP to take person age 28 and check whether the person is eliginle for smoking and print appropriate message otherwise throw the exception
// int main()
// {
//     int n;
//     cin>>n;

//     try{
//         if(n>28) cout<<"SMOKE";
//         else throw (n);
//     }
//     catch(int n)
//     {
//         cout<<"DONT SMOKE";
//     }
//     return 0;
// }

// int main()
// {
//     int n;
//     cin>>n;

//     try{
//         if(n>0) cout<<"Natural";
//         else throw (n);
//     }
//     catch(int n)
//     {
//         cout<<"not natural";
//     }
//     return 0;
// }

//-10 // +20
int main()
{
    int n;
    cin>>n;
    try
    {
        if(n>0) cout<<"\nPositive";
        else if(n<0) cout<<"Negative";
        else throw n;
    }
    catch(int n)
    {
        cout<<"\nneutral";
    }
    return 0;
}