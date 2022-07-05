// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> ans;
        unordered_set<int> s;
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        
        return ans;

        
           
    }


};