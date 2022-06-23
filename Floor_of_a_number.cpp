#include<bits/stdc++.h>
using namespace std;



int FloorNumber(int arr[],int start,int end,int target){


    while(start<end){
        int mid=((start+end)/2);

        if(arr[mid]==target){
            return target;
        }

        if(arr[mid]<target){
            start=mid+1;
        }

        if(arr[mid]>target){
            end=mid-1;
        }


    }

    return arr[end];
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

   cout<< FloorNumber(arr,0,n,target);
}