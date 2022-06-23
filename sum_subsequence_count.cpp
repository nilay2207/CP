#include<bits/stdc++.h>
using namespace std;

int print(int sum,int i,vector<int> &v,int n,int arr[],int given_sum,int count){

    if(i==n){
        if(sum==given_sum){
            // count++;

            // for(auto &x:v){
            //     cout<<x<<" "; 
            //     cout<<endl;
            //     return count;
            //

            return 1;
        }
        else return 0;
        }

        sum=sum+arr[i];
        v.push_back(arr[i]);
       int l= print(sum,i+1,v,n,arr,given_sum,count);
        sum=sum-arr[i];
        v.pop_back();
       int r= print(sum,i+1,v,n,arr,given_sum,count);
       return l+r;

        // cout<<count;
    
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

    vector<int> v;


   cout<< print(0,0,v,n,arr,given_sum,0);
}