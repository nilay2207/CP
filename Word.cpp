#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
int uppercount=0;
int lowercount=0;
for(int i=0;i<s.length();i++){
    if(s[i]>=65 && s[i]<=90){
        uppercount++;

    } else{
        lowercount++;
    }
}

if(uppercount>lowercount){
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s;
} else{
    transform(s.begin(),s.end(),s.begin(), ::tolower);
    cout<<s;
}
}