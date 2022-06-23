#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int,int> p;
    cin>>p.first;
    cin>>p.second;
    cout<<p.first<<" "<<p.second<<endl;

    pair<int,string> p1;
    p1=make_pair(5,"pranav");
    cout<<p1.first<<" "<<p1.second<<endl;
    p1=make_pair(8,"pppp");
    cout<<p1.first<<" "<<p1.second<<endl;
    pair<int,string> p2;
    p2={3,"ppppppppp"};
    cout<<p2.first<<" "<<p2.second<<endl;
    p=make_pair(5,6);
    cout<<p.first<<" "<<p.second<<endl;
    p2={5,"pppppppppppppppppp"};
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int,int> pppp[3];
    pppp[2]=make_pair(4,5);
    pppp[0]={2,3};
    pppp[1]={4,5};
    // pppp[2]={6,7};

    for(int i=0;i<3;i++){
        cout<<pppp[i].first<<" "<<pppp[i].second<<endl;
    }

    cout<<"enter size"<<endl;
    int size;
    cin>>size;
    pair<int,int> p_array[size];

    for(int i=0;i<size;i++ ){
        cin>>p_array[i].first;
        cin>>p_array[i].second;
    }

    for(int i=0;i<size;i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }



    
}