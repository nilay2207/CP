// https://leetcode.com/problems/product-of-array-except-self

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> vec;
        int count1=count(nums.begin(),nums.end(),0);
        
        if(count1==0){
            int product=1;
            for(int i=0;i<nums.size();i++){
                product=product*nums[i];
                
                
            }
            
            for(int i=0;i<nums.size();i++){
                // product=product*nums[i];
                vec.push_back(product/nums[i]);
                
            }
        }else if(count1==1){
            int position=0;
            int product=1;
            for(int i=0;i<nums.size();i++){
                if(nums[i]==0){
                    
                    position=i;
                    
                } else{
                    product=product*nums[i];
                }
            
            }
            
            for(int i=0;i<position;i++){
                vec.push_back(0);

            }
            vec.push_back(product);
            for(int i=position+1;i<nums.size();i++){
                vec.push_back(0);
            }
        } else{
            for(int i=0;i<nums.size();i++){
                vec.push_back(0);
            }
        }
        return vec;
        
    }
};