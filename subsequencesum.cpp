#include<bits/stdc++.h>
using namespace std;


void print1(int n,int arr[],vector<int>&v,int given_sum,int sum,int i){

    if(i==n){
        if(sum==given_sum){
            for(auto &tt:v){
                cout<<tt<<" ";
            cout<<endl;
            }
            return;
        }
    }
    v.push_back(arr[i]);
    sum+=arr[i];
print1(n,arr,v,given_sum,sum,i+1);
    sum-=arr[i];
    v.pop_back();
print1(n,arr,v,given_sum,sum,i+1);



}




int main(){
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int given_sum=2;
    vector<int> v;
    

    print1(n,arr,v,given_sum,0,0);
    return 0;

}