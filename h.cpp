#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> m;
    
    int a1[]={1,2,3,4,5};
    int a2[]={1,9,6,4,5,8};

    for(int i=0;i<sizeof(a1)/sizeof(a1[0]);i++)
    {
        m[a1[i]]++;
    }
    for(int i=0;i<sizeof(a2)/sizeof(a2[0]);i++)
    {
        m[a2[i]]++;
    }

    int count=0;

    unordered_map<int,int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); ++iter) {
        if(iter->second==1)
        {
            cout<<iter->first;
            count++;
        }
    }
    cout<<count;
    
    return 0;
}