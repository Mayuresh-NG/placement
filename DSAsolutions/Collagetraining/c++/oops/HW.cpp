//wap to print series evry even position odd number and every odd position even number ex: 
//wap to check no is palindrome or not;
//wap to check whether a a number is perfect,prime, and print the series 

#include<bits/stdc++.h>
using namespace std;

// int main()
// {
//     int num;
//     cin>>num;
//     for (int i = 1; i <=num; i++)
//     {
//         if(i%2==0) 
//         {
//             cout<<i-1<<" ";
//         }
//         else if(i%2!=0)
//         {
//             cout<<i+1<<" ";
//         }
// }
//     return 0;
// }

//WAP to reverse character in string
int main()
{
    string stri;
    getline(cin,stri);
    int len = stri.length();
    
    for(int i=0;i<len-1;i++)
    {
        if(stri[i]==' ')
        {
            while (l<r)
            {
                swap(stri[l],stri[r]);
                l++;
                r--;
            }
            
        }
    }
    return 0;
}