#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int d=0;
    int minds=0;
    for(int j=0;j<n;j++){
        if(j<n-1){
        d=abs(arr[j]-arr[j+1]);
        minds=min(d,minds);
        v.push_back(d);
        
        }
    }

    int minel=*min_element(v.begin(),v.end());
    // cout<<minel;

    for(int i=1;i<=n;i++){
        // cout<<arr[0]<<" "<<arr[n-1];
        if(arr[0]==arr[n-1]){
            cout<<n<<" "<<"1";
            return 0;
        }
        
        if(i<n-1){

            
        if(minel==abs(arr[i]-arr[i+1])){
            cout<<i<<" "<<i+1;
            break;
        }
        }
    }
    }

