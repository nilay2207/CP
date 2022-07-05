// https://leetcode.com/problems/missing-number

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        
        int missing=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<=nums.size();i++){
            if(i!=nums[i]){
                missing=i;
            }
        }
        
        return missing-1;
        
    }
};