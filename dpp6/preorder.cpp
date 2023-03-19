#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define whl(tt) while(tt--)
struct Node
{
    int data;
    struct Node *left,*right;
};
Node* newNode(int data){
    Node* temp= new Node;
    temp->data=data;
    temp->left=temp->right=NULL;
    return temp;
}
void inorder(Node* root){
    if (root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    inorder(root->left);
    
    inorder(root->right);
    
}

int main(){
   struct Node *root=newNode(1);
   root->left = newNode(2);
   root->right = newNode(3);
   root->left->left = newNode(4);
   root->left->right=newNode(5);

   inorder(root);
  
return 0;
}