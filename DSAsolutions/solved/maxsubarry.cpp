#include<bits/stdc++.h>
using namespace std;
//kadens algorithm
int maxsubarray(int arr[] , int size)
{
    int MAX = arr[0]; 
    int MAXEND = 0;
    for(int i = 0; i < size ; i++)
    {
        MAXEND = MAXEND + arr[i];
        if(MAX < MAXEND)
        {
            MAX = MAXEND;
        }
        else if(MAXEND < 0 )
        {
            MAXEND = 0;
        }
    } 
    return  MAX;
}

int main()
{
    int maxsum;
    
    int x;
    cin>>x;
    int nums[x];

    for(int i=0 ; i< x ;i++)
    {
        cin>>nums[i];
    }

    maxsum = maxsubarray(nums , x);
    cout<<maxsum;
    return 0;
}