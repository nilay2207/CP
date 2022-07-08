#include<bits/stdc++.h>
using namespace std;

void dfs(int vertex,vector<int> adj[],vector<int> &visited){

    visited[vertex]=1;


    //take action after enterning the vertex


    for(auto &child: adj[vertex]){
        //take action before entering the child
        if(visited[child]==0){
            dfs(child,adj,visited);
        }

        //take action after exiting the child
    }

    //take action before exiting the vertex

}


int main(){

}