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


int checklast(int n){
    return n%10;
}


int getevensum(int n){

long long int sum1=0;
    for(long long int i=2;i<=n;i++){
        if(i%2==0){
            sum1=sum1+i;
        }
    }

    return sum1;

}

int getoddsum(int n){

long long int sum2=0;
    for(long long int i=1;i<=n;i++){
        if(i%2!=0){
            sum2=sum2+i;
        }
    }

    return sum2;

}

void solve(){

    
    //n children with names c1 c2 cn to parents A and B
    string A,B;
    cin>>A>>B;
    // debug(A);
    // debug(B);
    int n;
    cin>>n;
    string arr[n];
    string childrens;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        childrens=childrens+arr[i];
    }
    string parents=A+B;
    sort(parents.begin(),parents.end());
    sort(childrens.begin(),childrens.end());
    debug(parents);
    debug(childrens);
    int p=0,c=0;
    string ans;
    while (c!=childrens.size())
    {
        if(parents[p]==childrens[c]){
            debug(parents[p]);
            debug(childrens[p]);
            ans=ans+parents[p];
            p++;
            c++;
        } else{
            debug(parents[p]);
            debug(childrens[c]);
            p++;
        }
    }

    sort(ans.begin(),ans.end());
    debug(ans);
    debug(childrens);
    if(ans==childrens){

        cout<<"YES"<<endl;
    } else{
        cout<<"NO"<<endl;
    }

    
    

    

}

    

int main(){


     int t;
    cin>>t;
   
   while (t--)
   {
       solve();
   }

   
               



      
}
