#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int sum=0;
    int j=0;
    int subarray;
    cin>>subarray;
    int i=0;
    vector<int> v;
    while(j<n){

        sum=sum+arr[j];
        if(j-i+1<subarray){
            j++;
        } else if((j-i+1)==subarray){
            v.push_back(sum);
            sum=sum-arr[i];
            i++;
            j++;
            
        }

    }
    cout<<*max_element(v.begin(),v.end());
    
}