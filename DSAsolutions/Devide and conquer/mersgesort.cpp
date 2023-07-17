#include<iostream>
using namespace std;

//TIME COMPLEXITY-> O(NLOGN)

void Merge(int arr[],int l,int mid,int r)
{
    //size of temp array
    int a1 = mid-l+1;
    int a2 = r-mid;

    //temp arrays to merge
    int a[a1];
    int b[a2];

    for(int i=0;i<a1;i++)
    {
        a[i]=arr[l+i];
    }

    for(int i=0;i<a2;i++)
    {
        b[i]=arr[mid+1+i];
    }

    //POINTERS
    int i=0;
    int j=0;
    //these pointer will traverse array
    int k=l;
    
    while (i<a1 && j<a2)
    {
        if(a[i]<b[j])
        {
            arr[k]=a[i];
            k++;
            i++;

        }
        else{
            arr[k]=b[j];
            k++;
            j++;
        }
    }
    
    while (i<a1)
    {
        arr[k]=a[i];
        k++;
        i++;
    }

    while (j<a2)
    {
        arr[k]=b[j];
        k++;
        j++;
    }
    

}

void MergeSort(int arr[],int l,int r)
{
    if(l<r)
    {
        int mid = (l+r)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}


int main()
{

    int arr[5]={0,5,9,6,2};
    MergeSort(arr,0,4);

    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
