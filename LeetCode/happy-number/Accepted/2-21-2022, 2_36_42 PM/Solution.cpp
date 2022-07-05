// https://leetcode.com/problems/happy-number

class Solution {
public:
    
    int findsquare(int n){
        long long int ans=0;
        
        while(n>0){
            int rem=n%10;
            ans+=rem*rem;
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        
        
        
        int fast=n;
        int slow=n;
        
        do{
            
            slow=findsquare(slow);
            fast=findsquare(findsquare(fast));
            
        } while (slow!=fast);
            
            if(slow==1){
                return true;
            }
        return false;
        
    }
};