#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1,3,2,3,4,1,6,4,3};

    int countarr[7];

    for(int i=0;i<6;i++)
    {
        countarr[i]=0;
    }
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        countarr[arr[i]]++;
    }

    for(int i=0;i<=6;i++)
    {
        cout<<countarr[i];
    }
    return 0;
}


