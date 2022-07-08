#include<bits/stdc++.h>
using namespace std;

bool detectCycle(int node,vector<int> adj[],vector<int> visited){
    queue<pair<int,int>> q;
    q.push(make_pair(node,-1));
    visited[node]=1;

    while (!q.empty())
    {
        int child=q.front().first;
        int parent=q.front().second;
        for(auto & neighbour:adj[child]){
            if(!visited[neighbour]){
                q.push(make_pair(neighbour,child));
                visited[neighbour]=1;
            } else 
                if(parent!=neighbour){
                    return true;
                }
            
        }
    }
    return false;
    
}

int main(){

}