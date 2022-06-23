#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[7]={7,8,9,10,11,12,13};

    // int *ptr=lower_bound(arr,arr+n,5);
    // cout<<(*ptr);
    // int *ptr=upper_bound(arr,arr+n,5);
    // cout<<(*ptr);

    int a= *min_element(arr,arr+n);
    cout<<(a)<<endl;
    int b= *max_element(arr,arr+n);
    cout<<b<<endl;
    auto *f = find(arr,arr+n,5);
    cout<<(*f);
    cout<<accumulate(arr,arr+n,0)<<endl;
    cout<<binary_search(arr,arr+n,1);
    

}