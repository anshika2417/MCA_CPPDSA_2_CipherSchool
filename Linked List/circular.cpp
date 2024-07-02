#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data=data;
        next=NULL;
    }
};

void insertion(Node* &head, int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        head->next=head;
        return;
    }
    Node* temp=head;                                                              
    while(temp->next != head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}

void insertionAtHead(Node* &head,int val)
{
    Node* n=new Node(val);
    if(head==NULL)
    {
        head=n;
        head->next=head;
        return;
    }
    Node* temp=head;
    
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
    head=n;
}

void deletionAtHead(Node* &head)
{
    Node* temp=head;
    while(temp->next != head)
    {
        temp=temp->next;
    }
    Node* todelete = head;
    temp->next=head->next;
    head=head->next;

    delete todelete;
}

void deletion(Node* &head,int pos)
{
    Node* temp=head;
    int count=1;
    if(pos==1)
    {
        deletionAtHead(head);
        return;
    }
    while(count != pos-1)
    {
        temp=temp->next;
        count++;
    }
    Node* toDelete =temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}
void display(Node* head)
{
    Node* temp=head;
    if(head==NULL)
    {
        cout<<"NULL";
        return;
    }

    do{
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }while(temp!=head);
    cout<<"NULL"<<endl;
}
int main()
{
    Node* head=NULL;
    insertion(head,21);
    insertion(head,22);
    insertion(head,23);
    insertion(head,24);
    display(head);

    insertionAtHead(head,34);
    display(head);

    //deletionAtHead(head);
    //display(head);
    
    deletion(head, 5);
    display(head);

}