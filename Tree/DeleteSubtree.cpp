/*
   1) if thehre is no left or right subtree then delete the node simple
   2) if there is either left subtree or right subtree then put that subtree into the roor and delete that root
   3) if both left and right subtree are present then either go to left subtree and pick the maximum subtree and put it 
      into the root or go to the right subtree and pick the min one and put it into the root then delete the root

*/

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


   Node* minValue(Node* &root)
   {
    Node* temp=root;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }

    return temp;
   }

   Node* maxValue(Node* &root)
   {
    Node* temp=root;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }

    return temp;
   }

   Node* deleteFromBST(Node* root, int val)
   {
    if(root==NULL) return root;

    if(root->data==val){
        //zero child
        if(root->left==NULL && root->right==NULL)
        {
            delete root;
            return NULL;
        }

        //1 child

        //left Child
        if(root->left!=NULL && root->right ==NULL)
        {
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
        if(root->left ==NULL && root->right !=NULL)
        {
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child
        //either find max from left subtree or find min from the right subtree
        if(root->left!=NULL && root->right!=NULL)
        {
            int minVal = minValue(root->right)->data;
            //replacing
            root->data = minVal;

            root->right = deleteFromBST(root->right,minVal);
            return root;
        }
    }
    else if(root->data>val)
    {
        root->left = deleteFromBST(root->left,val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right,val);
        return root;
    }
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
    //    cout<<endl;
    //    cout<<minValue(root);
    //    cout<<endl;
    //    cout<<maxValue(root);

       Node* temp = minValue(root);
       cout<<endl<<temp->data<<endl;

       deleteFromBST(root,3);
       print(root);

    return 0;
   }