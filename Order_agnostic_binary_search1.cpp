#include<bits/stdc++.h>
using namespace std;


int OrderAgnostic(int n,int arr[],int target){

    int start=0;
    int end=n;
    bool isAsec=true;
    if(arr[0]<arr[n])
    
    {
        isAsec;    
    } else {
        isAsec==false;
    }

    while (start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==target){
            return mid;
        }

        if(isAsec==true){
            if(arr[mid]<target){
                start=mid+1;
            } else{
                end=mid-1;
            }
        } else if(isAsec==false) {
            if(arr[mid]<target){
                end=mid-1;
            }else if(arr[mid]>target){
                start=mid+1;
            }
        }
    }
    return -1;
    
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

    

    cout<<OrderAgnostic(n,arr,target);
}