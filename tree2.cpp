#include<bits/stdc++.h>
using namespace std;


class Node{

    public:
    int vlaue;
    Node*left;
    Node*right;

    Node(int value){
        this->vlaue=value;
        this->left=NULL;
        this->right=NULL;

    }



};


Node* buildtree(Node*root){

    cout<<"enter data\n";
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter data on the left side of"<<data<<endl;
   root->left= buildtree(root->left);
    cout<<"enter data on the right side of"<<data<<endl;
    root->right=buildtree(root->right);
    return root;
    


}

void Levelorder(Node*root){

    queue<Node*>q;
    q.push(root);

    while (!q.empty())

    {
       Node*temp=q.front();
       cout<<temp->vlaue<<" ";
       q.pop();

       if(temp->left){
           q.push(temp->left);
       }

       if(temp->right){
           q.push(temp->right);
       }
    }
    
}

void preoredr(Node*root){

    if(root==NULL){
        return;
    }

    cout<<root->vlaue<<" ";
    preoredr(root->left);
    preoredr(root->right);
}

void inorder(Node* root){

    if(root==NULL){
        return;
    }

    inorder(root->left);
    cout<<root->vlaue<<" ";
    inorder(root->right);
    
}

void postorder(Node*root){
    if(root==NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->vlaue;
}


int main(){

    Node*root=NULL;
   root= buildtree(root);
    cout<<"level order\n";
    Levelorder(root);


}