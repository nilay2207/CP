#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int value;
    Node* left;
    Node* Right;


    Node(int value){

        this->value=value;
        this->left=NULL;
        this->Right=NULL;

    }
};


Node* buildTree(Node* root){

    cout<<"Enter the data"<<endl;
    int data;
    cin>>data;

    Node* root=new Node(data);
    if(data==-1){
        return NULL;
    }


    root->left=buildTree(root->left);
    root->Right=buildTree(root->Right);
    return root;


}



Node* Levelorder(Node*root){
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        Node*temp=q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        } else{
            if(root->left){
                q.push(root->left);
            }

            if(root->Right){
                q.push(root->Right);
            }
        }
    }
    
}


int main(){

}