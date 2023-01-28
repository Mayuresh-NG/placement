#include<bits/stdc++.h>
using namespace std;
 
//selection sort in arrays
//find the minimum element in array and swap it to first position
//then increment index and repeat
int main()
{   
    int arr[5] = {20,10,90,51,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        for(int j = i+1; j<size+1 ; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }

    for(int k = 0 ; k < size; k++)
    {
        cout<<arr[k]<<" ";
    }
    return 0;
}