#include<bits/stdc++.h>
using namespace std;


bool LinearSearch(int arr[],int n,int target,int i){
    if(i==n){
        return -1;
    }
    if(arr[i]==target){
        cout<<i;
        return true;
    }
    return arr[i]==target || LinearSearch(arr,n,target,i+1);
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

  LinearSearch(arr,n,target,0);

}