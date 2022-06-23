#include<bits/stdc++.h>
using namespace std;

int f(int n,vector<int>&dp){

    if(n<=1){
        return n;
    }

    if(dp[n]!=-1){
        return dp[n];
    }

    return dp[n]=f(n-1,dp)+f(n-2,dp);

}

int f2(int pre2,int prev1,int n){
    
    for(int i=2;i<n;i++){
        int curi=pre2+prev1;
        pre2=prev1;
        prev1=curi;
    }

    return prev1;

}



int main(){
    int n;
    cin>>n;

    // int dp[n+1];
    // memset(dp,-1,sizeof(dp));
    // vector<int> dp(n+1,-1);
//   cout<<f(n,dp);
  cout<<f2(0,1,n);
}