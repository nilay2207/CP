#include<bits/stdc++.h>
using namespace std;

bool checkCycle(int node,vector<int> adj[],vector<bool> &visited,vector<bool>& dfsvis){
    visited[node]=1;
    dfsvis[node]=1;

    for(auto&x:adj[node]){
        if(!visited[x]){
            if(checkCycle(x,adj,visited,dfsvis)){
                return true;
            } 
        } else if(dfsvis[x]){
            return true;
        }
    }
    dfsvis[node]=0;
    return false;
}


int main(){

}