#include<bits/stdc++.h>
using namespace std;

vector<int>  dfs(int n,vector<int> vis,vector<int> adj[],int node,vector<int> dfsStore){
    dfsStore.push_back(node);
    vis[node]=1;
    for(auto it: adj[node]){
        if(!vis[it]){
            dfs(n,vis,adj,it,dfsStore);
        }
    }
}




int main(){
int n;
cin>>n;
vector<int> visited(n+1,0);
vector<int> adj[n+1];
vector<int> dfsStore;
for(int i=1;i<=n;i++){

    if(!visited[i]){
        dfs(n,visited,adj,i,dfsStore);
    }

}
}