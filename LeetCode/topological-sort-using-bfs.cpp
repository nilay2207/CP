#include<bits/stdc++.h>
using namespace std;

void topological(int nodes,vector<int> adj[]){
    vector<int> indegree(nodes,0);

    for(int i=0;i<nodes;i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i=0;i<nodes;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }

    vector<int> topo;

    while(!q.empty()){
        int frontnode=q.front();
        q.pop();
        topo.push_back(frontnode);
        for(auto i: adj[frontnode]){
            indegree[i]--;
            if(indegree[i]==0){
                q.push(i);
            }
        }
    }
}

int main(){

}