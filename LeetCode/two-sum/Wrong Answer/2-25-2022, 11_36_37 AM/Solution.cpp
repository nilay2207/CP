// https://leetcode.com/problems/two-sum

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        vector<int>v;
        bool flag=false;
        
        for(int i=0;i<size;i++){
            for(int j=1;j<size;j++){
                if(nums[i]+nums[j]==target){
                    v.push_back(i);
                    v.push_back(j);
                    flag=1;
                    break;
                    
                }
            }
            if(flag==1){
                break;
            }
        }
        return v;
    }
};