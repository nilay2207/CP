// https://leetcode.com/problems/running-sum-of-1d-array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> vec;
        int sum=nums[0];
        for(int i=0;i<nums.size();i++){
            if(i==0){
                
                vec.push_back(nums[i]);
                
            } else{
                sum=sum+nums[i];
                vec.push_back(sum);
                
            }
        }
        return vec;
    }
};