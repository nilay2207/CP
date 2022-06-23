#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
    
    int i=0;
    string s;
    cin>>s;
    int count1=0, count2=0;
    while(s[i])
    { 
        if((s[i]-'0')%2==0){ 
            count1++;
            }
        else {
            count2++;
            }
        i++;
    }

    
    if(((s[s.size()-1])-'0')&1)
    {
        if(count2>=2)
        cout << "YES\n";
        else cout << "NO\n";
    }
    else{
        if(count1>=2)
        cout << "YES\n";
        else
        cout << "NO\n";
    
}    
}
}