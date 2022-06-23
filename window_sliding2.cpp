#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=arr[0];
    int givensum;
    cin>>givensum;
    while(sum>givensum){
        int i=0;
        sum=sum+arr[i];
        i++;
        if(sum>givensum){
            do
            {
                int i=0;
                sum=sum-arr[i];
                i++;
            } while (sum>givensum);
            
        
    }
    cout<<sum;
}
}