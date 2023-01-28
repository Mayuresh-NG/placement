#include<bits/stdc++.h>
using namespace std;

int binarySearch(int arr[], int n , int key)
{
    int s=0;
    int e = n;
    int mid;

    while(s<=e)
    {
        mid = s+e/2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]<key)
        {
            s = mid + 1 ;
        }
        else if(arr[mid]>key)
        {
            e = mid -1 ;
        }
    }
    return -1;
}

int main()
{
    int k;
    int arr[5] = {15,20,35,60,90};
    cout<<"Enter number to search";
    cin>>k;
    cout<<binarySearch(arr,5,k);
    return 0;
}