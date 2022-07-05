// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
            int i=0;
        while(i<nums.size()){
            int correctindex=nums[i];
            if(i!=correctindex && nums[i]<nums.size()){
                swap(nums[correctindex],nums[i]);
            } else{
                i++;
            }
        }
        
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=i){
                return i;
            }
        }
        
        return nums.size();
        
    }
};