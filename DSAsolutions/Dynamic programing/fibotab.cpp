#include <bits/stdc++.h>
using namespace std;

//using dp tabulation-without reccursion
int main()
{
    int n;
    cin>>n;

    int prev=1;
    int prev2=0;

    for (int i = 2; i <= n; i++)
    {
        int curi=prev+prev2;
        prev2=prev;
        prev=curi;
    }
    cout<<prev;
}