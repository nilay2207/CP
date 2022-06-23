#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[],int n,int i,int target,vector<int> &v){

    if(i==n){
        for(auto &x:v){
            cout<<x<<" ";
        }
        return;
    }
    if(arr[i]==target){
        v.push_back(i);
    }

    LinearSearch(arr,n,i+1,target,v);
}



vector<int> LinearSearch1(int arr[],int n,int i,int target){
    vector<int> v;
    if(i==n){
        
        return ;
    }
    if(arr[i]==target){
        v.push_back(i);
    }

    vector<int> answersfrombelow=LinearSearch1(arr,n,i+1,target);
  

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
    LinearSearch(arr,n,0,target,v);
}