// https://leetcode.com/problems/remove-duplicates-from-sorted-array

class Solution {
public:
    int removeDuplicates(vector<int>& nums){

    map<int,int> m;

    for(int i=0;i<nums.size();i++){

        m[nums[i]]++;
    }
    int counter=0;
    for(auto &x: m){
        nums[counter]=x.first;
        counter++;
    }

    return m.size();

}

};