#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n,int i){
    if(i==n)return 1;
    return arr[i]<arr[i+1] && sorted(arr,n,i+1);
}

bool sorted1(int arr[],int n,int i){

    while(i<n){
        if(arr[i]<arr[i+1]){
        sorted(arr,n,i+1);
        } else{
            cout<<"not sorted";
            return 0;
        }
    }
    return 1;

}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<< sorted(arr,n,0);
//    sorted1(arr,n,0);
}