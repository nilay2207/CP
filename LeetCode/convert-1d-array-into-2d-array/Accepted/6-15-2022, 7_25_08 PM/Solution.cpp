// https://leetcode.com/problems/convert-1d-array-into-2d-array

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        
       vector<vector<int> >vec(m,vector<int> (n,0)),fail;
        
        if(m*n!=original.size()){
             return fail;
            
        } 
        
        else{
                
            for(int i=0;i<original.size();i++){
                vec[i/n][i%n]=original[i];
            }
            
            return vec;
        }
        
    }
};