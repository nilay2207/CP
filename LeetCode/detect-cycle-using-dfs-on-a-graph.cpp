#include<bits/stdc++.h>
using namespace std;


bool detectCycle(int node,int parent,vector<int> adj[],vector<bool> visited){
    queue<pair<int,int> >q;
    q.push(make_pair(node,-1));
    visited[node]=true;

    while (!q.empty())
    {
        int n=q.front().first;
        int par=q.front().second;
        for(auto&x:adj[n]){
            if(!visited[x]){
                q.push(make_pair(x,n));
                visited[x]=true;
            }  else{
                if(x!=node){
                    return true;
                }
            }
        }
    }
    return false;
}


int main(){

}