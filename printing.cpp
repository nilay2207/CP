#include<bits/stdc++.h>
using namespace std;



#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key

#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

int gcd(int a, int b){if(b == 0){return a;}return gcd(b, a % b);}
int lcm(int a, int b){return (a / gcd(a, b)) * b;}
int isPrime(int n){if(n <= 1){return 0;}for(int i=2;i<=sqrt(n);i++){if(n%i==0){return 0;}}return 1;}
bool isPowerOfTwo(int n){
   if(n==0)
   return false;
   return (ceil(log2(n)) == floor(log2(n)));
}



void solve(int t){

 //all three have to be used
 //3printers 1 prints each D
 //4 cartiges in each printer
 //c,m,y,k

 //total amount of ink needed to print D is exactly 10^6 units

 int p1[3],p2[3],p3[3];

 for(int i=0;i<=3;i++){
     cin>>p1[i];
 }
 for(int j=0;j<=3;j++){
     cin>>p2[j];
 }
 for(int k=0;k<=3;k++){
     cin>>p3[k];
 }
 


// for(int i=0;i<=3;i++){
//      cout<<p1[i]<<" ";
//  }
//  cout<<endl;
//  for(int j=0;j<=3;j++){
//      cout<<p2[j]<<" ";
//  }
//  cout<<endl;
//  for(int k=0;k<=3;k++){
//      cout<<p3[k]<<" ";
//  }
//  cout<<endl;
 

 vector<long long int> vec1(3);
 vector<long long int> vec2(3);
 vector<long long int> vec3(3);
 vector<long long int> vec4(3);

 vec1.push_back(p1[0]);
 vec1.push_back(p2[0]);
 vec1.push_back(p3[0]);
 vec2.push_back(p1[1]);
 vec2.push_back(p2[1]);
 vec2.push_back(p3[1]);
 vec3.push_back(p1[2]);
 vec3.push_back(p2[2]);
 vec3.push_back(p3[2]);
 vec4.push_back(p1[3]);
 vec4.push_back(p2[3]);
 vec4.push_back(p3[3]);

 int x= *min_element(vec1.begin(),vec1.end());
 int y= *min_element(vec2.begin(),vec2.end());
 int z= *min_element(vec3.begin(),vec3.end());
 int w= *min_element(vec4.begin(),vec4.end());

 debug(x);
 debug(y);
 debug(z);
 debug(w);


}


int main() {

    int t;
    cin>>t;
    while (t--)
    {
        solve(t);
    }
    
    
    
    



      
}
