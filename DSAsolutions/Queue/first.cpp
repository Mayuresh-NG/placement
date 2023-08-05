#include<iostream>
using namespace std;
#define n 20

// queue using stack
class queue
{
    public:
    int* arr;
    int front;
    int back;

    queue()
    {
        arr=new int[n];
        front=-1;
        back=-1;
    }

    void enqueue(int x)
    {
        if(back==n-1)
        {
            cout<<"Overflow";
            return;
        }
        back++;
        arr[back]=x;

        if(front==-1)
        {
            front++;
        }
    }

    void dequeue()
    {   
        if(front==-1 || front>back)
        {
            cout<<"underflow";
            return;
        }
        front++;
    }

    int peek()
    {
        if(front==-1 || front>back)
        {
            cout<<"No element in queue";
            return -1;
        }
        return arr[front];
    }

    bool empty()
    {
        if(front==-1 || front>back)
        {
            return true;
        }
        return false;
    }
};
//queue code

int main()
{
    queue q;
    //operation
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    q.enqueue(5);
    cout<<q.peek();//front value
    cout<<q.empty();
}
