// https://leetcode.com/problems/find-if-path-exists-in-graph

class Solution {
public:
    bool res = false;
    void DFS(vector<int>edges[], int source, int destination,vector<bool>&visited){
        visited[source] = true;
        
        if(source == destination) res = true;
        for(auto child : edges[source]){
            if(visited[child] == false){
                DFS(edges,child,destination,visited);
            }
        }
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<int> Graph[n];
        
        for(int i=0;i<edges.size();i++){
            Graph[edges[i][0]].push_back(edges[i][1]);
            Graph[edges[i][1]].push_back(edges[i][0]); 
        }
    
        vector<bool> visited(n,false);
        
        DFS(Graph,source,destination,visited);
        return res;
    }
};