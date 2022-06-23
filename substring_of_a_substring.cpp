#include<bits/stdc++.h>
using namespace std;


int main(){


    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;
        int maxi=0,ans=0;

        int size=s.size();

        for(int i=0;i<size;i++){
            if(s[i]!=s[0] && s[i]!=s[size-1]){
                maxi++;
            } else
                maxi=0;

            ans=max(maxi,ans);

            

      
        }

        if(ans==0){
            cout<<"-1"<<endl;
        } else{
            cout<<ans<<endl;
        }

    }
    
}