#include<bits/stdc++.h>
using namespace std;
//TC o(N)
int main()
{
    int arr[] ={1,3,4,7,5,6,2};

    for(int i=1;i<sizeof(arr)/sizeof(arr[0]);i+=2)
    {
        if(arr[i]>arr[i-1])
        {
            swap(arr[i],arr[i-1]);
        }

        if(arr[i]>arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        cout<<arr[i];
    }    
    return 0;
}