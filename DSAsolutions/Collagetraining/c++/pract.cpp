//reverse of a number
//swap variables
//max in 3 numbers
//sum of even numbers from range 1-20
//

#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;

    a=a+b;
    b=a-b;
    a=a-b;

    cout<<a<<b;



    return 0;
}

// int main()
// {

//     int num;
//     int sum=0;
//     cin>>num;
//     while (num>0)
//     {
//         int quot = num%10;
//         num=num/10;
//         sum += (quot*10)+num;
//     }
//     cout<<sum;


//     return 0;
// }

//WAP to print multiplication table of 12

//WAP to check char is uppercase,lowercase or special symbol
// int main()
// {
//     char name;
//     cin>>name;
//     if(int(name)>=65 && int(name)<=91)
//     {
//         cout<<"Uppercase";
//     }

//     else if(int(name)>=97 && int(name)<=122)
//     {
//         cout<<"Lowercase";
//     }
//     else cout<<"Symbol";
//     return 0;
// }

// int main()
// {
//     char a;
//     cin>>a;
//     if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')
//     {
//         cout<<a<<"is vowel";
//     }
//     else cout<<"is consonanat";
//     return 0;
// }

//WAp to convert km to m
// int main()
// {
//     int km;
//     cin>>km;
//     km = 1000*km;
//     cout<<km;
//     return 0;
// }