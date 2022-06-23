#include<bits/stdc++.h>
using namespace std;


void print(vector<int> &v){

    for(auto x:v){
        cout<<x<<" ";
    }

}

void Linear1(int arr[] ,int n,int target,int i,vector<int> &v){
    if(i==n){
    print(v);
    return;}
    if(arr[i]==target){
        v.push_back(i);
    } 
    Linear1(arr,n,target,i+1,v);

    
    
    
}

vector<int> Linear2(int arr[],int n,int target,int i,vector<int> &v){
    if(i==n){
    // print(v);
    return v;}

    if(arr[i]==target){
        v.push_back(i);
    }
    Linear2(arr,n,target,i+1,v);

}

int main(){
    int n;
    cin>>n;
    int arr[n];

    int target;
    cin>>target;


    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>v;
    // Linear1(arr,n,target,0,v);
    Linear2(arr,n,target,0,v);

    
}