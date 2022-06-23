#include<bits/stdc++.h>
using namespace std;



int Merge(int arr[],int start,int end){
    int mid=(start+end)/2;

    int len1=mid-start+1;
    int len2=end-mid;

    int first[len1];
    int second[len2];

    int MainIndex=start;

    for(int i=0;i<len1;i++){
        first[i]=arr[MainIndex++];
    }

    MainIndex=mid+1;

    for(int i=0;i<len2;i++){
        second[i]=arr[MainIndex++];
    }


    int index1=0;
    int index2=0;
    MainIndex=start;
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2])
        {
        arr[MainIndex++]=first[index1++];
        } else {
            arr[MainIndex++]=second[index2++];
        }


    }

    while(index1<len1){
        arr[MainIndex++]=first[index1++];
    }

    while(index2<len2){
        arr[MainIndex++]=second[index2++];
    }
}



void MergeSort(int arr[],int n,int start,int end){

    if(start>=end){
        return;
    }
    int mid=(start+end)/2;

    MergeSort(arr,n,start,mid);
    MergeSort(arr,n,mid+1,end) ;

    Merge(arr,start,end);
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    MergeSort(arr,n,0,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}