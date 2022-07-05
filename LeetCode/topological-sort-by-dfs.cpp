#include<bits/stdc++.h>
using namespace std;

void topolicalSort(int node,vector<int>&visited,vector<int> adj[],stack<int> s){
    visited[node]=1;
    for(auto&x:adj[node]){
        if(!visited[x]){
            topolicalSort(x,visited,adj,s);
        }
    }

    s.push(node);

}

int main(){

}