// max consecutive ones after replacing k no.of 0's with 1
#include<iostream>
using namespace std;

int main()
{
    int arr[]={0,0,1,1,0,0,1,1,1,0,1,1,0,0,0,1,1,1,1};
    int k=3;

    int size=sizeof(arr)/sizeof(arr[0]);

    int zerocnt=0,i=0,ans=0;

    for(int j=0;j<size;j++)
    {
        if(arr[j]==0)
        {
            zerocnt++;
        }
        while (zerocnt>k)
        {
            if(arr[i]==0)
            {
                zerocnt--;  
            }
            i++; 
        }
        ans=max(ans,j-i+1);
    }
    cout<<ans;
}


