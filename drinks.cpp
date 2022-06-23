#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cin>>n;
    double ans=0.0,sum=0.0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    ans=sum/n;
    cout<<fixed<<setprecision(12)<<ans<<endl;

    return 0;
}