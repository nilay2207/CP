#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=10;
    // cin>>n;
    int subarray=3;
    // cin>>subarray;
    int sum;

    int arr[7]={2,3,5,2,9,7,1};
    // for(int i=0;i<n;i++)
        // cin>>arr[i];
    // }

    vector<int>v;
    for(int i=0;i<n;i++){
         sum=0;
        for(int j=i;j<i+3;j++){
            
            sum=sum+arr[j];

        }
            v.push_back(sum);
    }

    int max=*max_element(v.begin(),v.end());
    cout<<max;
}