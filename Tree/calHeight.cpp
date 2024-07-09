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


int calHeight(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }

    return max(calHeight(root->left),calHeight(root->right))+1;
}
int main()
{
    Node* root=new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right = new Node(5);

    cout<<calHeight(root);
}