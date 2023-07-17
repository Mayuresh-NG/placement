#include<iostream>
using namespace std;

//TIME COMPLEXITY-> O(NLOGN)

void swap(int arr[],int l,int r)
{
    int temp=arr[l];
    arr[l]=arr[r];
    arr[r]=temp;
}
int partition(int arr[],int l,int r)
{
    int pivot = arr[r];
    int i = l-1;
    for(int j=l;j<r;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        int pivot = partition(arr,l,r);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,r);
    }
}

int main()
{
    int arr[]={6,3,9,5,2,8,7};
    quicksort(arr,0,6);
    for (int i = 0; i < 7; i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}