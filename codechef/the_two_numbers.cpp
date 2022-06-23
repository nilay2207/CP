#include <iostream>
using namespace std;

int getpow(int x){
    int p=1;
    while(p*2<=x){
        p=p*2;
    }
    
    return p;
}

int main() {
	// your code goes here
	
	int t;
	cin>>t;
	while(t--){
	int n;
	cin>>n;
	int largest=getpow(n);
	int sec=largest/2;
	cout<<max(n-largest+1,sec)<<endl;
	}
}
