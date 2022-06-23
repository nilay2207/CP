#include<bits/stdc++.h>
using namespace std;

//normal recuesion
int frog(int n,int arr[]){
    if(n==0){
        return 0;
    }

    int right=INT_MAX;
    int left=frog(n-1,arr)+abs(arr[n-1]-arr[n]);
    if(n>1){
    int right=frog(n-2,arr)+abs(arr[n-2]-arr[n]);
    }
    return min(left,right);
}


//memoisation

int frog1(int n,vector<int> &v,int arr[]){

    if(n==0){
        return 0;
    }


    if(n!=-1){
        return v[n];
    }

    int right=INT_MAX;
    int left=frog1(n-1,v,arr)+abs(arr[n-1]-arr[n]);
    if(n>1){
    int right=frog1(n-2,v,arr)+abs(arr[n-2]-arr[n]);
    }

    return v[n]=min(left,right);

}

int tabulation(int n,vector<int> v,int arr[]){

    v[0]=0;
    for(int i=1;i<n;i++){
        int right=INT_MAX;
        int left=v[i-1]+abs(arr[i]-arr[i-1]);
        if(i>1){
            int right=v[i-2]+abs(arr[i]-arr[-2]);
        }

        v[n]=min(left,right);
        


    }

    return v[n-1];
    
}
//space optimized;

int spaceoptimized(int n,int arr[]){

    int first=0;
    int second=0;



    for(int i=1;i<n;i++){

        int right=INT_MAX;
        int left=first+abs(arr[i-1]-arr[i]);
        if(i>1){
        int right=second+abs(arr[i-2]-arr[i]);
        }

        int cur=min(left,right);
        first=second;
        second=cur;

    }

    return second;


}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>v(n+1,-1);
    frog(n,arr);
    frog1(n,v,arr);
}