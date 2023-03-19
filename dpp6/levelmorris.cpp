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
void inorder(Node* root){ //traversal using morris traversal
    if (root==NULL)
    {
        return;
    }
    queue<Node*> q;
    q.push(root);
    while (!q.empty())
    {
        int siz=q.size();
        for (int i = 0; i < siz; i++)
        {
            Node * h=q.front();
           
             q.pop();
             cout<<h->data<<" ";
             if (h->left!=NULL)
             {
                q.push(h->left);
             }
             if(h->right!=NULL) q.push(h->right);
             

        }
        cout<<endl;
        
        
    }
    
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