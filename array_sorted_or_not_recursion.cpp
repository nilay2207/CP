#include<bits/stdc++.h>
using namespace std;



bool sorted1(int arr[],int n,int i){
    if(i==n)return true;
    return arr[i]<arr[i+1] && sorted1(arr,n,i+1); 

}

void sort1(int arr[],int n,int first,int second){


    if(second>n){
        cout<<"sorted";
        return;}

    if(arr[first]<arr[second]){
        sort1(arr,n,first+1,second+1);
    } else {
        cout<<"not sorted";
    }

}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<< sorted1(arr,n,0);
}