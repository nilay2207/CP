#include<bits/stdc++.h>
using namespace std;



vector<int> bfsTraversal(int n,vector<int> adj[],vector<bool> &visited,vector<int> &bfs){
    queue<int> q;
    q.push(n);
   
   while (!q.empty())
   {
        int temp=q.front();
        bfs.push_back(temp);
        q.pop();

        for(auto&x:adj[temp]){

            if(!visited[x]){
                q.push(x);
                visited[x]=true;
            }
        }
        
   }
   return bfs;
}


int main(){
    int nodes,edges;
    cin>>nodes>>edges;
    vector<bool> visited;
    vector<int> bfs;
    vector<int> adj[nodes];
    for(int i=1;i<edges;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
    }  

    vector<int> bfstraversal=bfsTraversal(nodes,adj,visited,bfs);
    for(int i=0;i<nodes;i++){
        cout<<bfstraversal[i]<<" ";
    }

} 
