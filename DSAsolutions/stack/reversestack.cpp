//reverse a stack without using extra stack
#include<iostream>
using namespace std;
#include<stack>

void insertAtBottom(stack<int> &s,int element)
{
    if(s.empty())
    {
        s.push(element);
        return;
    }
    int topele=s.top();
    s.pop();
    insertAtBottom(s,element);
    s.push(topele);
}

void revrec(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int e = s.top();
    s.pop();
    revrec(s);
    insertAtBottom(s,e);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    revrec(s);
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
    cout<<endl;


}
