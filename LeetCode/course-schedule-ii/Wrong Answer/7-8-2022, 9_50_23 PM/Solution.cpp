// https://leetcode.com/problems/course-schedule-ii

class Solution {
public:
    
    void solve(int node,stack<int> &s,vector<vector<int>> &adj,vector<int> &visited){
        
        visited[node]=1;
        for(auto child: adj[node]){
            if(visited[child]==0){
                solve(child,s,adj,visited);
            }
        }
        
        s.push(node);
        
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        stack<int> s;
        vector<int> ans;
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++){
            adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        }
        vector<int> visited(numCourses,0);
        
        for(int i=0;i<prerequisites.size();i++){
            if(visited[i]==0){    
            solve(i,s,adj,visited);
            }
        }
        
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
};