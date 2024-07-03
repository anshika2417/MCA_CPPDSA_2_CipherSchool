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

Node* kReverse(Node* head, int k) {
    if (head == NULL) return NULL;

    Node* prev = NULL;
    Node* curr = head;
    Node* next = NULL;
    int count = 0;

    while (curr != NULL && count < k) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }

    if (next != NULL) {
        head->next = kReverse(next, k);
    }

    return prev;
}

//loop detection
Node* floydDetection(Node* &head)
{
    if(head==NULL) return NULL;

    //create two pointers fast and slow and initialize them on head
    //untill fast and slow are not equal to NULL , we keep moving slow by one step and fast by two step
    //if slow == fast return slow
    //if not then return NULL

    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && slow!=NULL)
    {
        slow=slow->next;
        if(fast->next !=NULL)
        fast=fast->next->next;

        if(fast == slow)
        {
            cout<<"Loop detected";
           return slow;
        }
    }
    return NULL;
}

Node* getStartingNode(Node* head)
{
    if(head==NULL) return NULL;

    Node* intersection = floydDetection(head);

    Node* slow=head;
    while(slow != intersection)
    {
        slow=slow->next;
        intersection=intersection->next;
    }
    return intersection;
}

void removeLoop(Node* head)
{
    if(head==NULL) return;

    Node* n = getStartingNode(head);
    Node* temp = n;

    while(temp->next != n)
    {
        temp=temp->next;
    }
    temp->next=NULL;

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

void middle(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    cout << slow->data << "->";
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
    //display(head);
    //deleteAtMiddle(head,1);
    //display(head);

    //reverseSingly(head);
    //display(head);

    //kReverse(head,2);
    //display(head);
    floydDetection(head);
    //getStartingNode(head);
    removeLoop(head);
  
    
    


}