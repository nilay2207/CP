#include<bits/stdc++.h>
using namespace std;



int Ceiling(int n,char arr[],int start,int end,char target){

        while(start<end){
            int mid=(start+end)/2;

            // if(arr[mid]==target){

            //     return arr[mid+1];

            // }

            if(arr[mid]>target){
                start;
                end=mid-1;
            }
                else
            // if(arr[mid]<target)
            {
                start=mid+1;
                end;
            }
        }

        return arr[start%n];

}




int main(){
    int n;
    cin>>n;
    char arr[n];
    char target;
    cin>>target;

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   cout<< Ceiling(n,arr,0,n,target);
}