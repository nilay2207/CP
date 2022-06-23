#include<bits/stdc++.h>
using namespace std;




int Search1(int n,int arr[],int target,bool Find){
    int ans=-1;
    int start=0;
    int end=n;
    while(start<end){
        int mid=(start+end)/2;

        if(arr[mid]==target){
                ans=mid;
            if(Find){
                end=mid-1;

            } else {
                start=mid+1;
            }

        }

        else if(arr[mid]>target){

            start;
            end=mid-1;

        } else if(arr[mid]<target){

            start=mid+1;
            end;

        }


    }
    return ans;
}

int main(){

    int n;
    cin>>n;
    int arr[n];
    int target;
    cin>>target;
    int ans[2]={-1,-1};
    bool Find;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=Search1(n,arr,target,true);
    int end=Search1(n,arr,target,false);

    cout<<start<<" "<<end;

    
} 

