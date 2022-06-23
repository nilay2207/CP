#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int arr[],int n,int i,int target){

    if(i==n){
        cout<<"target not found";
        return 0;
    }
    if(arr[i]==target){
        return i;
    }

    LinearSearch(arr,n,i+1,target);

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

 cout<<   LinearSearch(arr,n,0,target);
}