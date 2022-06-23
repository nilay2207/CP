#include<bits/stdc++.h>
using namespace std;

class node{
public:
int value;
node*left;
node*right;

node(int value){
    this->value=value;
    this->left=NULL;
    this->right=NULL;
}

vector<int> verticalOrder(node*root){
    map<int,map<int,vector<int>>>m;
    queue<pair<node*,pair<int,int>>>q;
    vector<int> ans;

    q.push(make_pair(root,make_pair(0,0)));

    while (!q.empty())
    {
        pair<node*,pair<int,int> >temp=q.front();
        q.pop();
        node*frontnode=temp.first;
        int horizontal=temp.second.first;
        int vertical=temp.second.second;
        m[horizontal][vertical].push_back(frontnode->value);
        if(frontnode->left){
            q.push(make_pair(frontnode->left,make_pair(horizontal-1,vertical+1)));
        }

        if(frontnode->right){
            q.push(make_pair(frontnode->right,make_pair(horizontal+1,vertical+1)));
        }

    }

    for(auto& i:m){
        for(auto &j:i.second){
            for(auto& c:j.second){
                ans.push_back(c);
            }
        }
    }
    return ans;
    
}



};



int main(){

}