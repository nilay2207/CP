// https://leetcode.com/problems/missing-number

class Solution {
public:
    
 void swap  (int first,int second,vector<int>&nums){
        
        int temp=nums[first];
        nums[first]=nums[second];
        nums[second]=temp;
    }
    
    int missingNumber(vector<int>& nums) {
        
        for(int i=0;i<nums.size();i++){
            int correctindex=nums[i];
            if(nums[correctindex]<nums.size() && nums[correctindex]!=nums[i]){
                swap(nums[correctindex],nums[i],nums);
            } else{
                i++;
            }
        }
        
        for(int index=0;index<nums.size();index++){
            if(index!=nums[index]){
                return index;
            } else {
                return (nums.size()-1);
            }
        }
        return -1;
    }
};
               
               
               
               