#include<iostream>
using namespace std;

void reverse(int arr[] , int size )
{
    int i,j,temp;
    for(i = 0 , j = size-1 ; i< size/2; i++,j--)
    {
        temp = arr[i];
        arr[i] = arr [j];
        arr[j] = temp;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    reverse(arr , n);

    for(int i=0 ; i<n ; i++)
    {
        cout<<arr[i];
    }
    return 0;
}