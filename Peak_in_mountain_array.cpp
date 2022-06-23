#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0;
    int end=n;
    

    while(start<end){
        int mid=(start+end)/2;
        if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
            cout<<mid;
            return 0;
        }else if(arr[mid]<arr[mid+1]){
            start=mid+1;

        }else if(arr[mid-1]>arr[mid]){
            end=mid;
        }
    }
}