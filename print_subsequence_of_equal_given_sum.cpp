#include<bits/stdc++.h>
using namespace std;




bool print(int n,int arr[],vector<int> &v,int sum,int given_sum,int index){

    if(index==n){
        if(sum==given_sum){
            for(auto &x:v){
                cout<<x<<" ";
            }
            return true;
        }
else return false;
    }

    sum=sum+arr[index];
    v.push_back(arr[index]);
    if(print(n,arr,v,sum,given_sum,index+1)==true)return true;
    v.pop_back();
    sum=sum-arr[index];
    if(print(n,arr,v,sum,given_sum,index+1)==true)return true;
    return false;



}



int main(){
    int n;
    cin>>n;

    int arr[n];
    int given_sum;
    cin>>given_sum;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int>v;
    print(n,arr,v,0,given_sum,0);
}