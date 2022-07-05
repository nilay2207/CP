#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int value;
    node* right;
    node* left;

    node(int value){
        this->value=value;
        this->left=NULL;
        this->right=NULL;
    }
};

bool detecCycle(int node,vector<int> adj[],vector<int> &visited){

    queue<pair<int,int>> q;
    q.push({node,-1});

    visited[node]=1;
    while (!q.empty())
    {

        pair<int,int> temp=q.front();
        q.pop();
        int n=temp.first;
        int parent=temp.second;

        for(auto it : adj[n]){
            if(!visited[it]){
                visited[it]=1;
                q.push({it,parent});
            } else if(it!=parent){
                return true;
            }
        }

    }

    return false;
    
    

}

int main(){

}