#include<bits/stdc++.h>
using namespace std;


double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans=0;
    vector<double> v;

    // copy(nums1.begin(),nums1.end(),v.begin());

    v.insert(v.begin(),nums1.begin(),nums1.end());
    v.insert(v.end(),nums2.begin(),nums2.end());
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    if(v.size()%2==0){
        ans=(v[v.size()/2]+v[(v.size()/2)-1])/2;
        // cout<<v[v.size()/2]<<" "<<v[(v.size()/2)-1]<<" ";
    } else{
        ans=v[v.size()/2];
    }

    return ans;
        

    }
    




int main(){
    vector<int> v(2);
    vector<int> v1(2);

    
    for(auto &x :v){
        cin>>x;
    }

    for(auto&y:v1){
        cin>>y;
    }

    



cout<<findMedianSortedArrays(v,v1);

}