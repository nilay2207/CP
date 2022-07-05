// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            
            int correctindex=nums[i];
            if(nums[i]<nums.size() && nums[i]!=nums[correctindex]){
                swap(nums[i],nums[correctindex]);
            }
            
            for(int i=0;i<nums.size();i++){
                if(nums[i]!=i){
                    ans=i;
                    break;
                } else {
                    ans=nums.size();
                    }
            }
            
        
            
        } 
        
        return ans;
        
    }
};