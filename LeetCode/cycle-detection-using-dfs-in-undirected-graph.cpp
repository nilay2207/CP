#include<bits/stdc++.h>
using namespace std;

bool detectCycle(int node,int parent,vector<int> visited,vector<int> adj[]){
    visited[node]=1;
    for(auto i:adj[node]){
        if(!visited[i]){
            if(detectCycle(i,node,visited,adj)){
                return true;
            }
        } else if(i!=parent){

            return true;

        }
    }
}

int main(){

}