#include<bits/stdc++.h>
using namespace std;



int maxele(int arr[],int start,int end){
    int maxof=0;
    for(int i=start;i<=end;i++){

        if(arr[i]>maxof){
            maxof=arr[i];
        }

    }
    return maxof;
}

void swap1(int arr[],int first,int second){

    int temp=arr[first];
    arr[first]=arr[second];
    arr[second]=temp;
    
}




void Selection(int n,int arr[]){
    for(int i=0;i<n;i++){
        int last=n-1-i;
        int max1=maxele(arr,0,last);
        swap1(arr,max1,last);

    }

    
}

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    

    Selection(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}