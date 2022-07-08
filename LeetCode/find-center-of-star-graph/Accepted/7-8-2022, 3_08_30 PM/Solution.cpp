// https://leetcode.com/problems/find-center-of-star-graph

class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int ans=0;
        map<int,int> m;
        
        for(auto it: edges){
            m[it[0]]++;
            m[it[1]]++;
        }
        
        for(auto i:m){
            if(edges.size()==i.second){
                ans=i.first;
            }
        }
        
        return ans;
        
    }
};