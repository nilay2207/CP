#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int t;
    cin>>t;
    while(t--){
        set<int>s;
        int l,r;
        cin>>l>>r;
        int count=0;
        if(l!=r){
        for(int i=l;i<=r;i++){
            for(int j=l;j<=r;j++){
                if(i==j){
                    count++;
                    s.insert(j);
                    

                    
                    
                }
            }
        }
        } else{
            cout<<1;
        }
        cout<<s.size()/2<<endl;
    }
}