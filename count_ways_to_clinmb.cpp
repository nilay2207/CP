#include<bits/stdc++.h>
using namespace std;



int count(int n){
    if(n==0){
        return 1;
    }

    int maxi=INT_MIN;
    int right=0;
    int left=count(n-1);
    if(n!=1){
    right=count(n-2);
    }

    return left+right;
}


int countDistinctWayToClimbStair(long long nStairs,vector<long long> &vec)
{
    //  Write your code here.
    if(nStairs==0){
        return 1;
    }

    int maxi=INT_MIN;
    int right=0;
    int left=countDistinctWayToClimbStair(nStairs-1,vec);
    if(vec[nStairs]!=-1){
        return vec[nStairs];
    }
    if(nStairs!=1){
    right=countDistinctWayToClimbStair(nStairs-2,vec);
    }

    return vec[nStairs]=left+right;
}

int main(){
    int n;
    cin>>n;
    cout<<count(n);
    vector<long long>v(n+1,-1);
    cout<<countDistinctWayToClimbStair(n,v);
}