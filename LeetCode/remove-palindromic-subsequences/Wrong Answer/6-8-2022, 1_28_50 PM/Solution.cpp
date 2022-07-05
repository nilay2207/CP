// https://leetcode.com/problems/remove-palindromic-subsequences

class Solution {
public:
    int removePalindromeSub(string s) {
        int size=s.size();
    int counter=1;
     for(int i=0;i<size/2;i++){

         if(s[i]!=s[size-i-1]){
             counter++;
         }

     }

     return counter;
     
        
    }
};