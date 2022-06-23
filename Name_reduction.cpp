#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while (t--)
    {
        string A,B;
        cin>>A>>B;
        string y=A+B;
        int n;
        cin>>n;
        string childrens[n];
        string z;
        for(int i=0;i<n;i++){
            cin>>childrens[i];
            z=z+childrens[i];
        }

        sort(z.begin(),z.end());
        int size=z.length();
        sort(y.begin(),y.end());
        // cout<<y<<endl;
        // cout<<y.substr(0,z.size())<<endl;
        // cout<<z;
        int j=0;
        int i=0;
        for( i=0;i<y.size();i++){
            if(y[i]!=z[j]){
                i++;
                
            } else{
                i++;
                j++;

            }

        }
        if(i==y.size() && j==z.size()){

            cout<<"YES"<<endl;

        } else{
            cout<<"NO"<<endl;
        }




        
        

        


    }
    
    
    
}