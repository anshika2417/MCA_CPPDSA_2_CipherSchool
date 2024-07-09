// create queue
// push root and NULL
// pop the front element and check if front ele is not null then then push the left and right ele of front till the q is not empty

#include<iostream>
#include<queue>
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

void sumAtKthLevel(Node* root, int k)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    int level,sum = 0;
    while(!q.empty())
    {
        
        Node* node = q.front();
        q.pop();
        if(node!=NULL)
        {
            if(level==k){
                sum+=node->data;
            }
            if(node->left)
            {
                q.push(node->left);
            }
            if(node->right)
            {
                q.push(node->right);
            }
        }

        else if(!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    cout<<"Level : "<<level<<endl<<"Sum : "<<sum;
}
int main()
{
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->right = new Node(5);

    sumAtKthLevel(root,2);
}
