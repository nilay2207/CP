#include<bits/stdc++.h>
using namespace std;

void swapped(int arr[],int first,int second){

    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=arr[first];

}




int getmax(int arr[],int a,int b,int n){
    int max1=0;
    for(int j=0;j<n;j++){
        if(arr[j]>max1){
            max1=j;
        }
    }
    return max1;
    
}

void Selection(int n, int arr[],int i){

    for(int i=0;i<n-1;i++){
        int last=n-1-i;
    int max=getmax(arr,0,last,n);
    swapped(arr,max,last);  

    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Selection(n,arr,0);
}