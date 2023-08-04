// Online C++ compiler to run C++ program online
//proogram which returns all possible subsquence of an array
#include <bits/stdc++.h>
using namespace std;


int subsequence(int i,vector<int> &v,int arr[])
{
    if(i>=3)
    {
        for(auto p:v)
        {
            cout<<p<<" ";
        }
        cout<<endl;
        return 0;
    }
    //pick
    v.push_back(arr[i]);
    subsequence(i+1,v,arr);

    //not pick
    v.pop_back();
    subsequence(i+1,v,arr);
}
int main() {
    int arr[]={3,1,2};
    vector<int> v;
    subsequence(0,v,arr);
}