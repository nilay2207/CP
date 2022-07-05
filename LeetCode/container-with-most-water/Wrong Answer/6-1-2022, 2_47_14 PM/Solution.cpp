// https://leetcode.com/problems/container-with-most-water

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxi=0;
        
        int maxi1=*max_element(height.begin(),height.end());
        for(int i=0;i<height.size();i++){
            
            if(height[i]!=maxi1 && maxi<height[i]){
                maxi=height[i];
            }
        
        }
        
        return maxi*maxi;
    }
};