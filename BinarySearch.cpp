#include<bits/stdc++.h>
using namespace std;



int BinarySearchRecursion(int n,int arr[],int start,int end,int target){

        if(start>end){
            return -1;
        }

       int mid=((start+end)/2);


        if(arr[mid]==target){
            return mid;
        }

        if(arr[mid]>target){
            BinarySearchRecursion(n,arr,start,mid-1,target);
        }

        if(arr[mid]<target){
             BinarySearchRecursion(n,arr,mid+1,end,target);
        }
    

    

    
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

    // int start=0;
    // int end=n;

    // while(start<end){
    //     int mid=((start+end)/2);

    //     if(arr[mid]==target){
    //         cout<<mid;
    //         return 0;
    //     }

    //     if(arr[mid]>target){
    //         start=mid+1;
    //         end;
    //     }

    //     if(arr[mid]<target){
    //         end=mid-1;
    //         start;
    //     }

        
    // }

    // cout<<"not found";
    
    cout<<BinarySearchRecursion(n,arr,0,n,target);


}