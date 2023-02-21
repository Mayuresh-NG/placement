#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[ ] = {20,10,90,4,51,6,59,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    for(int i=1;i<size;i++)
    {
        int curent = arr[i];
        int j = i-1;
        while (arr[j]>curent && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curent;

    }
    for (int  i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;
    

    return 0;
}