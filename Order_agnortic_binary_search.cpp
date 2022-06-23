#include<bits/stdc++.h>
using namespace std;



int Ascending(int n,int arr[],int start,int end,int target){
    
    if(start>end){
        return -1;
    }

    int mid=((start+end)/2);

    if(arr[mid]==target){
        return mid;
    }

    if(arr[mid]<target){
        return Ascending(n,arr,mid+1,end,target);

    }

    if(arr[mid]>target){
      return  Ascending(n,arr,start,mid-1,target);
    }


}

int Descending(int n,int arr[],int start,int end,int target){

    if(start>end){
        return -1;
    }

    int mid=((start+end)/2);
    if(arr[mid]==target){
        return mid;
    }

    if(arr[mid]<target){
        return Descending(n,arr,start,mid-1,target);
    }

    if(arr[mid]>target){
       return  Descending(n,arr,mid+1,end,target);
    }


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


    if(arr[0]<arr[n]){

     cout<<   Ascending(n,arr,0,n,target);

    } else if(arr[n]<arr[0]){

     cout<<   Descending(n,arr,0,n,target);

    }
}