#include<bits/stdc++.h>
using namespace std;

int main(){
    

    int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int target;
    cin>>target;
    int start=0;
    int end=1;

    while(arr[end]<target){
        int newstart=end+1;
        end=end+(end-start+1)*2;
    }

    while(start<end){



        int mid=(start+end)/2;
        


        if(arr[mid]==target){
            cout<<mid;
            return 0;
        }

        if(arr[mid]<target){
            start=mid+1;
        }

        else if(arr[mid]>target){
            end=mid-1;
        }
        
    }

    cout<<"not found";
}