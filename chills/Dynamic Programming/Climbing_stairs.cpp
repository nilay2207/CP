#include<bits/stdc++.h>
using namespace std;


//memoisation

int count(long long n,vector<long long> &v){
    if(n==0){
        return 1;
    }

    if(n==1){
        return 0;


    }

    if(v[n]!=-1){
        return v[n];
    }

    long  long left=count(n-1,v);
     long long right =count(n-2,v);
    return v[n]= left+right;
}

//tabulation
int count2(int n,vector<long long>&v){

    v[0]=1;
    v[1]=0;
    
    for(int i=2;i<n;i++){
        v[i]=v[i-1]+v[i-2];

    }
    
}



int main(){
    long long n;
    cin>>n;

    vector<long long> v(n+1,-1);

//    cout<< count(n,v);
   cout<<count2(n,v);

   
}