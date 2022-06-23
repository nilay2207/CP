#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
    int counta=0;
    int countb=0;
    string aa="a";
    string bb="b";

	string s;
    getline(cin,s);
    for(int i=0;i<s.size();i++){
        if(s[i]==98){
        countb=countb+1;
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]==97){
        counta=counta+1;
        }
    }

    if(counta>countb){
        for(int i=0;i<s.size();i++){
            if(s[i]==98){
                s.replace(s[i],1,aa);
                cout<<s[i];
            }
        }
    }
    if(counta<countb){
        for(int i=0;i<s.size();i++){
            if(s[i]==97){
                s.replace(s[i],1,bb);
                cout<<s[i];
            }
        }
    }
	return 0;
}