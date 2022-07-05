// https://leetcode.com/problems/median-of-two-sorted-arrays

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double ans=0;
    vector<int> v((nums1.size()+nums2.size())-1);

    copy(nums1.begin(),nums1.end(),v.begin());

    v.insert(v.end(),nums2.begin(),nums2.end());
    sort(v.begin(),v.end());
    // for(int i=0;i<v.size();i++){
    //     cout<<v[i]<<" ";
    // }

    if(v.size()%2==0){
        ans=(v[v.size()/2]+v[(v.size()/2)-1])/2;
    } else{
        ans=v[v.size()/2];
    }
        
return ans;
    }
    

};