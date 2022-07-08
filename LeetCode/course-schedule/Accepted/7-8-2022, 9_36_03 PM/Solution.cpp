// https://leetcode.com/problems/course-schedule

class Solution {
public:
    bool dfs(int vertex, vector<vector<int>>& adj , vector<int>& vis , vector<int>& dfsvis){
        vis[vertex]=1;
        dfsvis[vertex]=1;
        for(auto child:adj[vertex]){
            if(vis[child]==0){
                if(dfs(child , adj , vis , dfsvis)) return true;
            }
            else{
                if(dfsvis[child]) return true;
                else continue;
            }
        }
        dfsvis[vertex]=0;
        return false;
    }
    
    bool canFinish(int n, vector<vector<int>>& arr) {
        vector<vector<int>> adj(n);
        for(int i=0 ; i<arr.size() ; i++){
            adj[arr[i][1]].push_back(arr[i][0]);
        }
        
        vector<int> vis(n,0);
        vector<int> dfsvis(n,0);
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                if(dfs(i,adj,vis,dfsvis)) return false;
            }
        }
        return true;
    }
};