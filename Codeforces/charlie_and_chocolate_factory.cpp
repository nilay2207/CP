#include<bits/stdc++.h>
using namespace std;

void removeSpace(string &str)
{

    int i = 0, j = -1;
    int n = str.length();
 
 
    bool space = false;
 
    while (++j < n && str[j] == ' ');
 
    while (j < n)
    {
        if (str[j] != ' ')
        {
            if ((str[j] == '.' || str[j] == ',' ||
                 str[j] == '?') && i - 1 >= 0 &&
                 str[i - 1] == ' ')
                str[i - 1] = str[j++];
 
            else
                str[i++] = str[j++];
 
            space = false;
        }
        else if (str[j++] == ' ')
        {
            if (!space)
            {
                str[i++] = ' ';
                space = true;
            }
        }
    }
    if (i <= 1)
        str.erase(str.begin() + i, str.end());
    else
        str.erase(str.begin() + i - 1, str.end());
 

}

void removeSpecialCharacter(string s)
{
    
    string special="!@#$%&^*_+~?/><-=}{][)(:`01233456789;:|""\"";

    for(char c:special){
        s.erase(remove(s.begin(),s.end(),c),s.end());
    }
    cout<<s;
} 

int main(){
    string s;
    getline(cin, s);
    string spaceremoved;
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    
    //  for(int i=0; i<s.length();  ){
    
    //     if(s[i] == ' '){
    //         if(i==0 || i==s.length()-1){
    //             i++;
    //             continue;
    //         }
    //         while(s[i+1] == ' ')
    //             i++;
    //     }
        
    
    //     spaceremoved =spaceremoved +s[i++];
    // }
    // cout<<spaceremoved<<endl;
    removeSpace(s);
    removeSpecialCharacter(s);
}