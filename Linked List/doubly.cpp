#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data)
    {
        this->data=data;
        next=NULL;
        prev=NULL;
    }
};

void insertion(Node* &head, int val)
{
    Node* n=new Node(val);
    Node* temp=head;
    if(head==NULL)
    {
        head=n;
        head->next=NULL;
        head->prev=NULL;
        return;
    }
    while(temp->next !=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;   
}
void display(Node* &head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    Node* head=NULL;
    insertion(head,1);
    insertion(head,2);
    insertion(head,3);
    insertion(head,4);
    display(head);
    //middle(head);
    display(head);
}