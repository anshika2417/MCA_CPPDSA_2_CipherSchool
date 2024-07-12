/*
        Binary Search Tree - Special kind of binary search tree which follows the following properties :-
        1) The left subtree of a node contains only nodes with keys less than the node's key
        2) The right subtree of node will contain only nodes with greater than one's key
        3) The left and right subtree each must be a BST
        4) There must be no duplicate nodes 
*/

//Inorder traversal of BST is sorted

#include<bits/stdc++.h>
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

    return 0;
   }