// Tree : A non linear data structure
// Depth : number of edges from root to node
// Height : number of longest path between node and leaf
// max node of level, l=2^n
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

void preOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node* root)
{
    if(root==NULL)
    {
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}

int main()
{
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right = new Node(5);
    cout<<"Pre Order : ";
    preOrder(root);
    cout<<endl;
    cout<<"In Order : ";
    inOrder(root);
    cout<<endl;
    cout<<"Post Order : ";
    postOrder(root);
    
}