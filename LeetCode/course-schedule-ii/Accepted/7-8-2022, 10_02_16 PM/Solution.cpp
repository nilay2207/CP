// https://leetcode.com/problems/course-schedule-ii

class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adj(numCourses);
        for(int i=0;i<prerequisites.size();i++) adj[prerequisites[i][1]].push_back(prerequisites[i][0]);
        vector<int> vis(numCourses,0),dfsvis(numCourses,0),ans;
        stack<int> st;
        for(int i=0;i<numCourses;i++){
            if(!vis[i]){
                if(dfsCycle(adj,vis,dfsvis,st,i)) return ans;
            }    
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans;
    }
    bool dfsCycle(vector<vector<int>>& adj,vector<int>& vis,vector<int>& dfsvis,stack<int>& st,int i){
        vis[i]=1;
        dfsvis[i]=1;
        for(auto it:adj[i]){
            if(!vis[it]){
                if(dfsCycle(adj,vis,dfsvis,st,it)) return true;
            }else if(dfsvis[it]) return true;
        }
        st.push(i);
        dfsvis[i]=0;
        return false;
    }
};