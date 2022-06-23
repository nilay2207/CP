#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n;
        cin>>n;
        string s1;
        cin>>s1;
        string s2;

        s2=s1;
        sort(s1.begin(),s1.end());
        // cout<<sortedS;
        
        for(int i=0;i<n;i++){
            
            // cout<<s[0]<<" "<<s[n-1];
            if(s2[i]!=s1[i]){
            swap(s2[i],s2[n-1-i]);
            }
            
        }

        if(s1==s2){
            cout<<"YES"<<endl;
        } else{
            cout<<"NO"<<endl;
        }


    }
    
}