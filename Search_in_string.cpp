#include<bits/stdc++.h>
using namespace std;



int SearchInString(string &s,int size,int index,char c)
{

    if(size==0){
        return -1;
    }

    for(index=0;index<size;index++){
        if(s[index]==c){
            return index;
        }
    }

    return -1;

}

int SearchRecursion(string &s,char c,int index){
    if(index==s.size()){
        // cout<<"not found";
        return -1;
    }

    if(s[index]==c){
        return index;
    } else{
        SearchRecursion(s,c,index+1);
    }


    




}


int main(){
    string s;
    getline(cin,s);
    int size;
    size=s.size();
    char c;
    cin>>c;

//  cout<<   SearchInString(s,size,0,c);

 cout<<SearchRecursion(s,c,0);
}