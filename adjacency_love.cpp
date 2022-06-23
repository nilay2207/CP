#include <bits/stdc++.h>
using namespace std;



int main() {
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        vector<long long int>odd;
        vector<long long int>even;
        for(long long int i=0;i<n;i++){
            long long int y;
            cin>>y;
            if(y%2!=0){
                odd.push_back(y);
            }
            else{
                even.push_back(y);
            }           
               
        }
        if(odd.size()==1 && even.size()>0){
            cout<<-1<<endl;

        
        }
        else if(odd.size()==n && (n&1)){
            cout<<-1<<endl;     
        }
        else if(odd.size()==1 && even.size()==0){
            cout<<odd[0]<<endl;       
        }                 
        else if(odd.size()>=2){
            if (odd.size()&1){
                cout<<odd[0]<<" ";
                for(long long int i=0;i<even.size();i++){
                    cout<<even[i]<<" ";
                } 
                for(long long int i=1;i<odd.size();i++){
                    cout<<odd[i]<<" ";
                }
                cout<<endl;
            }
            else {
                for(long long int i=0;i<even.size();i++){
                    cout<<even[i]<<" ";
                } 
                for(long long int i=0;i<odd.size();i++){
                    cout<<odd[i]<<" ";
                }
                cout<<endl;
            }     
                 
        }
        else{
            cout<<-1<<endl;
        }
    }
 return 0;
}