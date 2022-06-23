#include<bits/stdc++.h>
using namespace std;



int Quick(int arr[],int low,int high){
    if(low>=high){
        return 0;
    }

    int s=low;
    int e=high;
    int mid= s+(e-s)/2;
    int pivot=arr[mid];

    while(s<=e){
        while(arr[s]<pivot){
            s++;
        }
        while (arr[e]>pivot)
        {
            e--;
        }

        if(s<=e){
            int temp=arr[s];
            arr[s]=arr[e];
            arr[e]=temp;
            s++;
            e--;
        }
        
    }

    Quick(arr,low,e);
    Quick(arr,s,high);
}




int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    Quick(arr,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}