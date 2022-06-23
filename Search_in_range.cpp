#include<bits/stdc++.h>
using namespace std;



int SearchRange(int n,int arr[],int start,int end,int target){

    for(int i=start;i<end;i++){

        if(arr[i]==target){
            return i;
        }

    }

    return -1;
}

int SearchRecursion(int n,int arr[],int index,int end,int target){
    if(index==n || index==end){
        return -1;
    }

    if(arr[index]==target){
        return index;
    } else {

    SearchRecursion(n,arr,index+1,end,target);
    }
}




int main(){



    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start;
    int end;
    int target;
    cin>>target;
    cin>>start>>end;

//  cout<<   SearchRange(n,arr,start,end,target);


 cout<<SearchRecursion(n,arr,start,end,target);



}