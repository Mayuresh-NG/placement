#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[9]={1,2,0,7,2,0,2,2};
    
    int curr= 0;
    int mx = -1;

    int i = 0;
    while(i<8)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            curr++;  
        }

        i++;
    }
    cout<<curr<<endl;
    return 0;
}