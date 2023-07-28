//stack using array
#include<iostream>
using namespace std;
#define n 100

class stack
{
    public:
    int *arr;
    int top;
    
    stack()
    {
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Overfflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
        
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Underflow"<<endl;
            return;
        }
        top--;
    }

    int Top()
    {
        if(top==-1)
        {
            cout<<"Underflow"<<endl;
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        if(top==-1)
        {
            return true;
        }
        else false;
    }
};



int main()
{
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.pop();
    s.pop();
    s.pop();
    s.pop();
    cout<<s.empty()<<endl;
    cout<<s.Top()<<endl;
}