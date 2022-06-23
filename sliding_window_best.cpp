#include<bits/stdc++.h>
using namespace std;

int getmax(int sum1,int sum2){
    if(sum2>sum1){
        return sum2;
    } else {
        return sum1;
    }
}




int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int k;
    cin>>k;
    int sum1=0,sum2;
    for(int i=0;i<k;i++){
        sum1=sum1+arr[i];
        sum2=sum1;
    }

    for(int i=k;i<n;i++){
        sum1+=(arr[i]-arr[i-k]);
        sum2=getmax(sum1,sum2);
    }
    cout<<sum2;
}