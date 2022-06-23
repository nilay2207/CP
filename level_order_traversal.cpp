#include<bits/stdc++.h>
using namespace std;

class Node{

public:
int value;
Node*left;
Node*right;


Node(int value){

    this->value=value;
    this->left=NULL;
    this->right=NULL;

}

};

vector<vector<int>> LevelOrder(Node*root){
    vector<vector<int>> ans;
    queue<Node*> q;
    q.push(root);

    while (!q.empty())
    {
        int size=q.size();
        vector<int> level;

        for(int i=0;i<size;i++){
            Node* x=q.front();
            q.pop();

            if(x->left){
                q.push(x->left);

            }

            if(x->right){
                q.push(x->right);
            }
                level.push_back(x->value);

        }

        ans.push_back(level);


    }
    
}


vector<int> iterativePreorder(Node*root){

  vector<int>preorder;
  stack<Node*> st;
  st.push(root);
  while (!st.empty())

  {
        Node*x=st.top();
        st.pop();
        preorder.push_back(x->value);
        if(x->left){
            st.push(x->left);
        }    
        if(x->right){
            st.push(x->right);
        }

  }
    

}

vector<vector<int>> zigzag(Node*root){
    vector<vector<int>> ans;
    queue<Node*> q;
    q.push(root);

    bool flag=0;

    //flag=0 means left to right
    //flag=1 means right to left 

    while (!q.empty())
    {   
        for(int i=0;i<q.size();i++){
            vector<int>levels;
        Node* x=q.front();
        q.pop();
        levels.push_back(x->value);
        

        



        if(x->left){
            q.push(x->left);
        }

        if(x->right){
            q.push(x->right);
        }
        
        }

        


    }
        
}

vector<vector<int>>levelorder(Node* root){
    vector<vector<int>>ans;
    queue<Node*> q;

    q.push(root);

    while (!q.empty())
    {
        for(int i=0;i<q.size();i++){
            Node* x=q.front();
            q.pop();
            vector<int> levels;
            levels.push_back(x->value);

            if(x->left){
                levels.push_back(x->value);
            }
            if(x->right){
                levels.push_back(x->value);

            }

            ans.push_back(levels);
        }
    }
    
}



int main(){

}