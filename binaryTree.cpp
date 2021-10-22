#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};

void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}

void preorder(Node *root){
    if(root!=NULL){
         cout<<root->data<<" ";
        preorder(root->left);
       
        preorder(root->right);
    }
}

 void postorder(Node *root){
    if(root!=NULL){
         
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}

int Height(Node *root){
    if(root==NULL)
        return 0;

        else
        return max(Height(root->left),Height(root->right))+1;
    
}

void distan(Node *root,int k){
    if(root==NULL){
        return ;
    }
    if(k==0){
        cout<<root->data<<" ";

    }
    else{
        distan(root->left,k-1);
        distan(root->right,k-1);
    }
}

int getMax(Node *root){
    if(root==NULL)
        return INT_MIN;
    else
        return max(root->key,max(getMax(root->left),getMax(root->right)));
} 

int main(){
    Node* root=new Node(1);
    root->left=new Node(10);
    root->right=new Node(30);
    int k=1;
//    cout<<"enter the value of k";
//    cin>>k;
   distan(root,k);
    preorder(root);
    cout<<"\n";
     inorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
   cout<< Height(root);

   	cout<<getMax(root);
   
}