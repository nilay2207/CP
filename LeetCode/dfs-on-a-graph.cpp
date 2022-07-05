#include<bits/stdc++.h>
using namespace std;

vector<int> dfsTraversal(int node,vector<bool> &visited,vector<int> adj[],vector<int> &dfs){

        dfs.push_back(node);
        visited[node]=true;
        for(auto&x:adj[node]){
            if(!visited[x]){
                dfsTraversal(x,visited,adj,dfs);
            }
        }

}

int main(){

}