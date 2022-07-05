// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int correctindex=nums[i];
            if(i!=correctindex){
                swap(nums[i],nums[correctindex]);
            }
            if(i!=nums[i]){
                ans=i;
            }
        } 
        
        return ans;
        
    }
};