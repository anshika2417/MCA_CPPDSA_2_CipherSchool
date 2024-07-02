//Linked list is a linear data structure
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insertAtTail(Node* &head,int val)
{
    Node* n=new Node(val);
    Node* temp=head;
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next != NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void insertAtHead(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    Node* temp=n;
    temp->next=head;
    head=n;
}

bool search(Node* &head,int key)
{
    Node* temp=head;
    while(temp != NULL)
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

void reverseSingly(Node* &head)
{
    Node* curr=head;
    Node* prev=NULL;
    Node* next;

    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;

        prev=curr;
        curr=next;
    }
    head=prev;
}

void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

void deleteAtHead(Node* &head)
{
    Node* temp=head;
    head=head->next;
    delete temp;
}
void deleteAtMiddle(Node* &head,int val)
{
    Node* temp=head;
    if(val==head->data)
    {
        deleteAtHead(head);
        return;
    }
    if(head==NULL)
    {
        return;
    }
    while(temp->next->data!=val)
    {
        temp=temp->next;
    }
    Node* toDelete=temp->next;
    temp->next=temp->next->next;
    delete toDelete;
}
int main()
{
    Node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    display(head);
    deleteAtMiddle(head,1);
    display(head);

    reverseSingly(head);
    display(head);
    


}