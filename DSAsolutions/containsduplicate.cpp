//Given an integer array nums, return true if any value appears
//at least twice in the array, and return false if every element is distinct.

#include<iostream>
using namespace std;

bool checkduplicate(int arr[] , int size)
{
    for(int i=0 ; i<size ; i++)
    {
        int j = i + 1;
        while(size>0 and j < size)
        {
            if(arr[i]==arr[j])
            {
                return true;
            }
            j++;
        }
    }
    return false;
    
}

int main()
{
    int size ,c ;
    int nums[] = {1,2,3,3};
    size = sizeof(nums)/sizeof(nums[0]);
    
    c=checkduplicate(nums , size);
    if(c==true)
    {
        cout<<"contains duplicate";
    }
    else cout<<"does not conatain duplicate";
    return 0;
}