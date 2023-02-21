#include<bits/stdc++.h>
using namespace std;

//repeteadly sort two elements if theyare in wrong order
int main()
{
    int arr[ ] = {20,10,90,4,51,6,59,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    int temp;
    int tempsize = size ;

while(tempsize>=1)
{
    for(int i=0 ; i<tempsize; i++)
    {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i+1];
            arr[i+1] = arr[i];
            arr[i] = temp ;
        }
    } 
    tempsize--;
}

    for(int i=0 ; i<size; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
