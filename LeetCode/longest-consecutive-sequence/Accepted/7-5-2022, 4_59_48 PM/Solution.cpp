// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        
        unordered_set<int> s(nums.begin(),nums.end());
        int ans=0;
        for(auto &it:nums){
            if(s.find(it)==s.end()){
                continue;
            }
            
            int pre=it-1;
            int next=it+1;
            while(s.find(pre)!=s.end()){
                pre--;
            }
            
            while(s.find(next)!=s.end()){
                next++;
            }
            
            ans=max(ans,next-pre-1);
            s.erase(it);
        }
        
        return ans;
        
    }
};