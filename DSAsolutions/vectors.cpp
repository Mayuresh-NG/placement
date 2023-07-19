#include<bits/stdc++.h>
using namespace std;


bool mYcompare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;
}

int main()
{
    // vector<int> v;
    // //add elements to vector
    // v.push_back(7);
    // v.push_back(4);
    // v.push_back(8);
    // v.push_back(4);

    // for (int i = 0; i < v.size(); i++)
    // {
    //     cout<<v[i];
    // }

    // //itereate using iterator
    // vector<int>::iterator it;
    // for(it=v.begin();it!=v.end();it++)
    // {
    //     cout<<*it;
    // }

    // for(auto i:v)
    // {
    //     cout<<i;
    // }

    // //remove element from vector
    // v.pop_back();

    // vector<int> v2(3,50);//50 50 50

    // swap(v,v2);

    // //swap two vector arrays
    // for(auto i:v)
    // {
    //     cout<<i;
    // }


    // for(auto i:v2)
    // {
    //     cout<<i;
    // }

    // sort(v2.begin(),v2.end());
    // for(auto i:v2)
    // {
    //     cout<<i;
    // }

    vector<pair<int,int>> v;
    int arr[] = {10,16,7,14,5,3,12,9};
    
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
    {
        // pair<int,int> p;
        // p.first = arr[i];
        // p.second = i;
        // v.push_back(p);

        v.push_back(make_pair(arr[i],i));
    }

    sort(v.begin(),v.end(),mYcompare);

    for(int i=0;i<v.size();i++)
    {
        arr[v[i].second]=i;
    }

    for(int i=0;i<v.size();i++)
    {
        cout<<arr[i];
    }
    
    return 0;
}