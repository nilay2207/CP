#include<bits/stdc++.h>
using namespace std;

bool isBipartite(int node,vector<int> color,vector<int> adj[]){
    if(color[node]==-1){
        color[node]=1;
    }

    for(auto it: adj[node]){
        if(color[node]==-1){
            if(isBipartite(it,color,adj)){
                return true;
            }
        } else{
            if(color[it]==color[node]){
                return false;
            }
        }
    }
}

int main(){

}