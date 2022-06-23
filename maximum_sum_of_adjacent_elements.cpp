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

int rec1(int index,vector<int>&vec){
    if(index==0){
        return vec[index];
    }

    if(index<0){
        return 0;
    }

    int pick= vec[index]+rec1(index-2,vec);
    int not_pick=0+rec1(index-1,vec);

    return max(pick,not_pick);

}

//memoisation
int rec2(int index,vector<int>&vec,vector<int>&dp){
    if(index==0){
        return vec[index];
    }

    if(index<0){
        return 0;
    }

    if(dp[index]!=-1){
        return dp[index];
    }
    int pick= vec[index]+rec2(index-2,vec,dp);
    int not_pick=0+rec2(index-1,vec,dp);

    return dp[index]= max(pick,not_pick);

}

//tabulation

int rec3(int index,vector<int>&vec,vector<int>&dp){
    
    dp[0]=vec[0];
    int neg=0;

    if(dp[index]!=-1){
        return dp[index];
    }

    for(int i=0;i<index;i++){
        int pick=vec[index];
        if(i>1){
            pick+=dp[i-2];
        }
        int not_pick=0+dp[i-1];
        dp[index]= max(pick,not_pick);
    }


}




void solve(){
    int n;
    cin>>n;
    vector<int> vec(n);
    vector<int> dp(n+1,-1);
    for(auto &x: vec){
        cin>>x;

    }

    debug(vec);

    rec1(n,vec);
    rec2(n,vec,dp);
    


}


int main() {
    


    solve();
    int n;
    cin>>n;
    vector<int>v(n);

    for(auto&x:v){
        cin>>x;
    }

    int prev=v[0];
    int prev2=0;
    for(int i=1;i<n;i++){
        int pick=v[0];
        if(i>1){
            pick+=prev2;
        }

        int not_pick=0+prev2;

        int cur=max(pick,not_pick);
        prev2=prev;
        prev=cur;
    }

    return prev;


    
}
