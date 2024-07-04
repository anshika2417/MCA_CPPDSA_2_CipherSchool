#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int *arr;
    int top;

    Stack()
    {
        arr=new int[size];
        top=-1;
    }

    void push(int val)
    {
        if(top==size-1)
        {
            cout<<"Stack overflow";
            return;
        }
        else{
            top++;
            arr[top]=val;
        }
        
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty";
            return;
        }
        else{
            top--;
        }
    }

    int peek()
    {
        if(top>=0)
        {
            return arr[top];
        }
        else{
            cout<<"Stack is empty";
        }
    }

    bool isStack()
    {
        if(arr[top]==-1)
        {
            return true;
        }
        else 
        return false;
    }
};

int main()
{
    Stack st;
    st.size = 3;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.isStack();
    //cout<<st.peek();
}