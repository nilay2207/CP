#include<bits/stdc++.h>
using namespace std;


int getlargestsum(int sum1,int sum2=0){

    if(sum1>sum2){
        sum2=sum1;
    }

    return sum2;
    
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    int k;
    cin>>k;

    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int sum1=0;
    for(int i=0;i+k-1<n;i++){
        for(int j=0;j<k;j++){
            sum1=sum1+arr[i+j];

        }

    }
    cout<<getlargestsum(sum1);
}