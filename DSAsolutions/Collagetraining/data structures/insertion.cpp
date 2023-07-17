#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {20,10,90,4,51,6,59,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            if(arr[i]<arr[j] && j>=0){
            swap(arr[i],arr[j]);
            }
        }
        
    }
    
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    return 0;
}