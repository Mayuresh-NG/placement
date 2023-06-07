#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int len=0;
    int newlen;
    int maxlen = 0;

    for(int i=0;i<str.length();i++)
    {
        if(str[i]!='P')
        {
            newlen = (i - len)+1;
            if(newlen>maxlen)
            {
                maxlen = newlen;
            }
            else maxlen =  maxlen;
            len = newlen;
        }
    }

    cout<<maxlen;
    return 0;
}