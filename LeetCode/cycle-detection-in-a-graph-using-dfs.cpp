#include<bits/stdc++.h>
using namespace std;

bool detectCycle(int node,int parent,vector<int> adj[],vector<bool> &visited){
    queue<pair<int,int>> q;
    q.push(make_pair(node,-1));

    visited[node]=true;
    for(auto x:adj[node] ){
        if(!visited[x]){
            if(detectCycle(x,node,adj,visited)){
                return true;
            }
        } else if(x!=parent){
            return true;
        }
    }

    return false;
}

int main(){

}