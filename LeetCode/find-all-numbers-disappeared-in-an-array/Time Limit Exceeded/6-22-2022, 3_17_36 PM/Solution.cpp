// https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> ans;
    int i=0;
    while (i<nums.size())
    {
        /* code */
        int correctindex=nums[i]-1;
        if(correctindex!=i){
            swap(nums[correctindex],nums[i]);
        } else{
            i++;
        }


    }

    for(int i=0;i<nums.size();i++){
        if(nums[i]!=i){
            ans.push_back(i+1);
        }
    }

    return ans;
    
           
    }


};