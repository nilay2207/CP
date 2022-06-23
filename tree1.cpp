#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int value;
    Node*left;
    Node*right;

    Node(int v){
        this->value=v;
        this->left=NULL;
        this->right=NULL;
    }
};


Node* buildTree(Node* root) {

    cout << "Enter the data: " << endl;
    int data;
    cin >> data;
    root = new Node(data);    

    if(data == -1) {
        return NULL;
    }

    cout << "Enter data for inserting in left of " << data << endl;
    root->left = buildTree(root->left);
    cout << "Enter data for inserting in right of " << data << endl;
    root->right = buildTree(root->right);
    return root;

}
int main(){

    

     Node* root = NULL;

    root = buildTree(root);

}