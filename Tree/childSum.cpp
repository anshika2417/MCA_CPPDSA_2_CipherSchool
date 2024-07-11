//do it by recursion
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
int sumChild(Node* root)
    {
        if(root==NULL) return 0;

        return sumChild(root->left)+sumChild(root->right)+sumChild(root);
    }

int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(2);

    cout<<sumChild(root);
}