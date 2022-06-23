#include<bits/stdc++.h>
using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        vector<int> ans;
        unordered_set<int> s;
        
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
        }
        
        for(int i=1;i<=nums.size();i++){
            if(s.find(i)==s.end()){
                ans.push_back(i);
            }
        }
        
        // return ans;

        for(auto&x:ans){
            cout<<x<<" ";
        }
        
           
}

vector<int> findDisappered(int n,vector<int> vec){
    vector<int> ans;
    int i=1;
    while (i<=vec.size())
    {
        /* code */
        int correctindex=vec[i];
        if(i!=correctindex){
            swap(vec[correctindex],vec[i]);
        } else{
            i++;
        }


    }

    for(int i=1;i<=n;i++){
        if(vec[i]!=i){
            ans.push_back(i);
        }
    }

    return ans;
    

}



int main(){
    int n;
    cin>>n;

    vector<int> vec(n);


    for(auto&x:vec){
        cin>>x;
    }

    findDisappearedNumbers(vec);

    



    
}