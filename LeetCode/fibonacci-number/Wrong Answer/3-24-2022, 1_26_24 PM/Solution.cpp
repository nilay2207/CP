// https://leetcode.com/problems/fibonacci-number

class Solution {
public:
    int fib(int n) {
        
        int cur;
        int prev=1;
        int prev2=0;
        
        for(int i=2;i<=n;i++){
            cur=prev+prev2;
            prev2=prev;
            prev=cur;
        }
        
        return prev;
        
    }
};