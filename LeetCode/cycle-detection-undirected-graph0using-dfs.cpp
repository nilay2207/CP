#include<bits/stdc++.h>
using namespace std;

bool cycleDetec(int node,int parent,vector<int> adj[],vector<int>& visited){
    visited[node]=1;
    for(auto&x:adj[node]){
        if(visited[x]==0){
            if(cycleDetec(x,node,adj,visited)){
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