#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    long long mod=998244353;
    while (t--)
    {
        long long n;
        cin>>n;

        string s;
        cin>>s;

        long long a[n]={0};
        long long c=1;
        long long ans=0;

        if(s[0]=='1'){
            a[0]=1;
        }

        long long pre=a[0];

        for(int i=1;i<n;i++){

            if(s[i]=='1'){
                pre+=(i+1);
            }
            a[i]=pre;
            a[i]=a[i]%2;

        }

        for(long long i=n-1;i>=0;i--){
            if(a[i]==1){
                ans+=c;
                ans=ans%mod;
            }
            c=c*2;
            c=c%mod;
        }

        cout<<(ans%mod)<<endl;
    }
    
}