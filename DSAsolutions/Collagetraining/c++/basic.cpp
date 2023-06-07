#include<bits/stdc++.h>
using namespace std;
#define pi 3.14

//1. WAP to calc circumferance of circle 
// int main()
// {
//     float rad;
//     cout<<"Enter radius";
//     cin>>rad;
//     float circum;
//     circum = 2 * pi * rad;
//     cout<<circum;
//     return 0;
// }

// 2. WAP to check whether the numvber is pos,neg or zero using conditional
// int main()
// {
//     int num;
//     cout<<"enter a number";
//     cin>>num;
//     if(num>0)
//     {
//         cout<<num<<" is positive";
//     }
//     else if(num==0)
//     {
//         cout<<num<<"It is zero";
//     }
//     else cout<<num<<" is negative";
//     return 0;
// }

// 3. Wap to check whether number is armstrong number 
// int main()
// {
//     int num;
//     int sum=0;
//     cout<<"Enter a number: ";
//     cin>>num;
//     int lnum = num;
//     while (num>0)
//     {
//         int quot = num%10;
//         sum += (quot*quot*quot);
//         num=num/10;
//     }
//     if(sum==lnum)
//     {
//         cout<<"Yes";
//     }
//     else cout<<"No";
//     return 0;
// }

//4. WAP to check whether nummber is neon number or not
// int main()
// {
//     int num;
//     cout<<"Enter number";
//     cin>>num;
//     int sum=0;
//     int sq = num*num;
//     while (sq>0)
//     {
//         int qout = sq%10;
//         sum+=qout;
//         sq = sq/10;
//     }
//     if(num==sum)
//     {
//         cout<<"Yes";
//     }
//     else cout<<"No";
//     return 0;
// }

//Divisibl by 3
// int  main()
// {
//     int l,r,v;
//     std::cout<<"Enter initial , final and divisible";
//     std::cin>>l>>r>>v;
//     int count=0;
//     for (int i = l; i < r; i++)
//     {
//         if(i%v==0)
//         {
//             std::cout<<i<<" ";
//             count++;
//         }
//     }
//     std::cout<<count;
//     return 0;
// }

