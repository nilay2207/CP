#include<bits/stdc++.h>
using namespace std;




int count1(int n,int arr[],vector<int> &v){


    if(n==0){
        return arr[n];
    }

    if(n<0){
        return 0;
    }
    if(v[n]!=-1){
        return v[n];
    }
    int pick=count1(n-2,arr,v)+arr[n];
    int notpick=count1(n-1,arr,v);

    return v[n]=max(pick,notpick);

}


int count2(int n,int arr[],vector<int>&v){

    v[0]=arr[0];


    for(int i=0;i<n;i++){


        int take=arr[i];
        if(i>1){
            take=take+arr[i-2];
        }
        int nottake=v[i-1];

        v[i]=max(take,nottake);

    }

}



int main(){
    int n;
    cin>>n;
    int arr[n];
    vector<int> v(n+1,-1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    count1(n,arr,v);

    int prv=arr[0];
    int prev2=0;

    for(int i=1;i<n;i++){
        int take=arr[i];
        if(i>1){
            take=take+prev2;
        }

        int nottake=prv;

        int cur=max(take,nottake);
        prev2=prv;
        prv=cur;
    }

    return prv;
}