#include <bits/stdc++.h>
using namespace std;


// int main(){
//     int arr[10]={1,10,11,100,101,110,111,1000,1001};
//     sort(arr,arr+9);

//     for(auto &x:arr){
//         cout<<x<<endl;
//     }
// }




int bitcount(int n){
    int count=0;
    while (n>0)
    {
       count=count+1;
       n=n&(n-1);
    }

    return count;

}

int main(){
    int t;
    cin>>t;
    // int arr[9]={1,10,100,101,11,110,111}
    while (t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v;

        for(int i=1;i<=k;i++){
            int y=bitcount(i);
            v.push_back(y);

        }

        cout<<accumulate(v.begin(),v.end(),0)<<endl;

        // for(auto &x:v){
        //     cout<<x<<endl;
        // }
    }

}

// int main()
// {

//     int t;
//     cin >> t;
//     while (t--)
//     {   
//         int n,k;
//         cin>>n>>k;
//         unordered_set<int> s;
//         for(int )
//     }
// }