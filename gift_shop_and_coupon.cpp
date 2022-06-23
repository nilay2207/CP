#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        int n,k;
        cin>>n>>k;

        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
            
        }
        sort(arr,arr+n);
        int sum=0;
        //cheff has k amount of money
        //50% offer only on one item
        //
        // cout<<arr[n-1];
        int c=-1,count=0;
        for(int i=0;i<n;i++){
            if(sum+arr[i]>=k){
                c=i;
                break;
            }

            sum=sum+arr[i];
            count++;
        }
        
        if(c==-1){
            cout<<n<<endl;
        } else{
        if(arr[c]%2==0){
            if((arr[c]/2 + sum)<=k){
                count++;
            }

        } else{
            if((arr[c]/2 + sum+1)<=k){
                count++;
            }
        }

        cout<<count<<endl;
        }

    }
    
}