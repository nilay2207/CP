// https://leetcode.com/problems/longest-consecutive-sequence

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mini=INT_MAX;
    int counter=0;
    int counter2=0;
    for(int i=0;i<nums.size()-1;i++){
        if(nums[i]!=nums[i+1]){
        mini=min(mini,abs(nums[i]-nums[i+1]));
        } else{
            counter2++;
        }
    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1] || (abs(nums[i]-nums[i+1])<=mini)){
            counter++;
        }
    }
        
        return counter+1+counter2;

    }
};