// https://leetcode.com/problems/sqrtx

class Solution {
public:
    int mySqrt(int x) {
        
     long long   int start=0;
       long long int end=x;
        
        while(start<=end){
          long long  int mid=(start+end)/2;
            if(mid*mid==x) {
            return mid;}
            if(mid*mid<x){
                start=mid+1;
            } else if(mid*mid>x){
                
                                end=mid-1;

            }
        }
        return start-1;
        
    }
};