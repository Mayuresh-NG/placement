#include<bits/stdc++.h>
using namespace std;

//WAP
int main()
{
    string n;
    cin>>n;

    int arr[26];

    for(int i=0;i<26;i++)
    {
        arr[i]=0;
    }

    for(int i=0;i<n.length();i++)
    {
        arr[n[i]-'a']++;
    }
    
    char ans ='a';
    int maxF=0;

    for(int i=0;i<26;i++)
    {
        if(arr[i]>maxF)
        {
            maxF=arr[i];
            ans = i+'a';
        }
    }

    cout<<maxF<<" "<<ans;
    return 0;
}