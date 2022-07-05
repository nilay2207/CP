#include<bits/stdc++.h>
using namespace std;

bool isBipartite(int node,vector<int> adj[],vector<int> color){

    color[node]=1;
    queue<int> q;
    q.push(node);

    while (!q.empty())
    {
        int n=q.front();
        q.pop();

        for(auto&x:adj[n]){
            if(color[x]==-1){
                color[x]=1-color[n];
            } else{
                if(color[x]==color[node]){
                    return false;
                }
            }
        }
    }

    return true;

}

int main(){

    int n;
    cin>>n;
    vector<int> color(n,-1);
    vector<int> adj[n];
    isBipartite(n,adj,color);

}