#include<iostream>
using namespace std;

class Queue
{
    public:
    int *arr;
    int front;
    int rear;
    int size;

    Queue(int s)
    {
        size=s;
        arr=new int[size];
        front=-1;
        rear=-1;
    }

    void push(int val)
    {
        if(rear == size-1)
        {
            cout<<"Queue overflow"<<endl;
            return;
        }
        rear++;
        arr[rear] = val;

        if(front == -1) front++;
    }

    void pop()
    {
        if(front == -1 || front > rear)
        {
            cout<<"No elements in queue"<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if(front ==-1)
        {
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[front];
    }

    void display()
    {
        if(front == -1)

        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        for(int i=front;i<=rear;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    Queue q(4);
    q.push(10);
    q.push(20);
    q.push(30);
    //cout<<q.peek();
    q.display();
}