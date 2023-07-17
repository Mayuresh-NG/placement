#include<bits/stdc++.h>
using namespace std;


int main()
{   
    vector<string> s;
    vector<string>::iterator i;

    string a;
    
    getline(cin,a);
    s.push_back(a);


    for(i=s.begin();i<s.end();i++)
    {
        cout<<*i;
    }

    return  0;
}