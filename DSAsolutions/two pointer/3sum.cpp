#include<bits/stdc++.h>
using namespace std;

//repeteadly sort two elements if theyare in wrong order
int main()
{
    int arr[ ] = {12,3,7,1,6,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target=18;
    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[i],arr[j]);
            }
        }
    }
    bool found=false;
    for(int i=0;i<size;i++)
    {
        int lo=i+1;
        int hi=size-1;
        while(lo<hi)
        {
            int curr=arr[i]+arr[lo]+arr[hi];
            if(curr==target)
            {
                cout<<arr[i]<<"+"<<arr[lo]<<"+"<<arr[hi]<<endl;
                found=true;
            }
            if(curr<target)
            {
                lo++;
            }
            hi--;
        }
    }    
    if(found)cout<<true;
    else cout<<false;
    return 0;
}
