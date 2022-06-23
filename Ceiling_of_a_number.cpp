#include<bits/stdc++.h>
using namespace std;



int Ceiling(int arr[],int start,int end,int target){

        while(start<=end){

            int mid=((start+end)/2);
            if(arr[mid]==target){

                return target;

            } 
            
                
            

           else if(arr[mid]>target){
                end=mid-1;
                start;
            } else if(arr[mid]<target){
                start=mid+1;
                end;
            }


        }
            
            return arr[start];

        

        
}




int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int target;
    cin>>target;
    
   cout<< Ceiling(arr,0,n,target);
}