#include<bits/stdc++.h>
using namespace std;

int linearsearch(int n,int arr[],int index,int target){

    if(index==n){
        return -1;
    }
    
    if(arr[index]==target){
        cout<<index;
    }

    return arr[index]==target || linearsearch(n,arr,index+1,target);


}

void linearsearch1(int n,int arr[],int index,int target){
        
        if(index==n)return;
        if(arr[index]==target){
            cout<<index;
            return;
        }
        linearsearch(n,arr,index+1,target);
}


void LinearSearchForMultipleOc(int n,int arr[],int index,int target,vector<int> &v){

    if(index==n){
        for(auto x:v){
            cout<<x<<" ";
        }
        return;
    }
    if(arr[index]==target){
        v.push_back(arr[index]);
    }

    LinearSearchForMultipleOc(n,arr,index+1,target,v);



}

int main(){
    int n;
    cin>>n;
    int target;
    cin>>target;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int> v;
    // linearsearch1(n,arr,0,target);
    LinearSearchForMultipleOc(n,arr,0,target,v);
}