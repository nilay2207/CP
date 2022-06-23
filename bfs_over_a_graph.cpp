#include<bits/stdc++.h>
using namespace std;


vector<int> bfs(vector<int> adj[],int v){
    queue<int> q;
    q.push(0);
    vector<int> vec(v,0);
    vec[0]=1;
    vector<int>bfss;

    while (!q.empty())
    {
        int node=q.front();
        q.pop();
        bfss.push_back(node);
        for(auto& it:adj[node]){
            if(!vec[it]){
                q.push(it);
                vec[it]=1;
            }
        }
        
    }

    return bfss;
    
}


int main(){

}