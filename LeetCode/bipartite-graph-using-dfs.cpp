#include<bits/stdc++.h>
using namespace std;

bool isBipartite(int node,vector<int> adj[],vector<int> color){


    if(color[node]==-1){
        color[node]=1;
    }

    for(auto&x:adj[node]){
        if(color[x]==-1){
            if(!isBipartite(x,adj,color)){
                return false;
            }
        } else{
            if(color[node]==color[x]){
                return false;
            }
        }
    }

    return true;

}

int main(){

}