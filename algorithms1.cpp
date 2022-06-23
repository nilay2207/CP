#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> n;

    n.push_back(5);
    n.push_back(6);
    n.push_back(7);
    n.push_back(8);
    n.push_back(9);


    cout<<binary_search(n.begin(),n.end(),6);
    // cout<<lower_bound(n.begin(),n.end());
}