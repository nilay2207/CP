// https://leetcode.com/problems/remove-palindromic-subsequences

class Solution {
public:
    int removePalindromeSub(string s) {
        if(equal(s.begin(),s.begin()+s.size()/2,s.rbegin())){
            return 1;
        } else{
return 2;}
        
    }
};