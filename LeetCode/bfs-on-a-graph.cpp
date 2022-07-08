#include<bits/stdc++.h>
using namespace std;

vector<int> bfs(int node,vector<int> adj[]){
    vector<int> visited(node,0);
    vector<int> bfstraversal;
    queue<int> q;
    q.push(0);

    visited[0]=1;

    while (!q.empty())
    {
        int frontnode=q.front();
        q.pop();
        bfstraversal.push_back(frontnode);
        for( auto it : adj[frontnode]){
            if(visited[it]==0){
                visited[it]=1;
                q.push(it);
            }
        }
    }
    
}

int main(){

}