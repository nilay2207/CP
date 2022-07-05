// https://leetcode.com/problems/peak-index-in-a-mountain-array

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        
        for(auto&x:arr){
            cin>>x;
        
    
        }
        
        int start=0;
            int end=arr.size();
        
        while(start<end){
            int mid=(start+end)/2;
            
           if(arr[mid]>arr[mid+1]){
               end=mid;
           }else{
               start=mid+1;
           }
        }
        return start;
    }

};