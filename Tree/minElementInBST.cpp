#include<iostream>
 using namespace std;
  
   class Node {
    public:
      int data;
      Node *left;
      Node *right;
      Node(int d){
        data=d;
        left=right=NULL;
      }
   };  


   Node *insertinBST(Node *root, int data){
    if(root==NULL){
        return new Node(data);
    }

    if(data<root->data){
        root->left=insertinBST(root->left,data);
    } else {
        root->right=insertinBST(root->right,data);
    }
    return root;
   }

   int minValue(Node* &root)
   {
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }

    return temp->data;
   }

   int maxValue(Node* &root)
   {
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }

    return temp->data;
   }

   void print(Node *root){
    if(root==NULL){
        return;
    }
    print(root->left);
    cout<<root->data<<" ";
    print(root->right);
   }

   int main(){

  Node *root = NULL;

  root=insertinBST(root,5);
       insertinBST(root,1);
       insertinBST(root,3);
       insertinBST(root,4);
       insertinBST(root,2);
       insertinBST(root,7);

       print(root);
       cout<<endl;
       cout<<minValue(root);
       cout<<endl;
       cout<<maxValue(root);

    //    Node* temp = minValue(root);
    //    cout<<endl<<temp->data<<endl;

    return 0;
   }