// https://leetcode.com/problems/largest-rectangle-in-histogram

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        
        int maxi=*max_element(heights.begin(),heights.end());
        int pos=0;        
        for(int i=0;i<heights.size();i++){
            if(heights[i]==maxi){
                    pos=i;
            }
        }
        if(pos!=heights.size()-1){
        return max(heights[pos-1]*2,heights[pos+1]*2);
        } else{
            return heights[pos-1]*2;
        }
    }
};