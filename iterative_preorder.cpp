#include<bits/stdc++.h>
using namespace std;


class Node{
    public:

    int value;
    Node* right;
    Node* left;

    Node(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

vector<int> preorder(Node*root){
    stack<Node*> s;
    s.push(root);
    vector<int> preordertraversal;
    while (!s.empty())
{
        root=s.top();
        s.pop();
        preordertraversal.push_back(root->value);
        if(root->left){
            s.push(root->left);
        }

        if(root->right){
            s.push(root->right);
        }

    }

    return preordertraversal;
    
}



int main(){





}