#include<bits/stdc++.h>
using namespace std;

bool isBipartite(int node,vector<int > &color,vector<int> adj[]){
    queue<int> q;
    q.push(node);
    color[node]=1;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto it: adj[node]){
            if(color[it]==-1){
                color[it]=1-color[node];
                q.push(it);

            } else{
                if(color[it]==color[node]){
                    return false;
                }
            }
        }
    }   

    return true;
}

int main(){

}