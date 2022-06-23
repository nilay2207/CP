#include<bits/stdc++.h>
using namespace std;



void print1(vector<int> &v){
    for(auto &x: v){
        cout<<x<<" ";
    }
    cout<<endl;
}


void print(int n,int arr[],int givensum,vector<int> &v,int sum,int index){

    if(index==n){
        if(sum==givensum){
        print1(v);
        return;
        }
    }

    v.push_back(arr[index]);
    sum=sum+arr[index];
    print(n,arr,givensum,v,sum,index+1);
    sum=sum-arr[index];
    v.pop_back();
    print(n,arr,givensum,v,sum,index+1);


}
int main(){
    int n;
    cin>>n;
    int given_sum;
    cin>>given_sum;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>v;
    print(n,arr,given_sum,v,0,0);
}