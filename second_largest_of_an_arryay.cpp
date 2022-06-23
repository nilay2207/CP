#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
        int first=0,second=0;
    for(int i=0;i<n;i++){
        if(first<arr[i]){
            first=arr[i];
        }
    }
    // cout<<first<<endl;

    for(int i=0;i<n;i++){
        if(arr[i]!=first){
            if(second<arr[i]){
                second=arr[i];
            }
        }
    }
    if(first==second){
        cout<<"-1";
    }
    else{
    cout<<second;
    }
    
}