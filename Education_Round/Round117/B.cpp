/***
 * Bismillahir Rahmanir Rahim
 * Author:  Abu Bakar Siddik(City University-53 Batch , Dhaka)
 ***/
#include <bits/stdc++.h>
#define F first
#define S second
#define endl '\n'
#define pb push_back
#define pf push_front
#define all(x) x.begin(), x.end()
#define Auto(it, v) for (auto &it : v)
#define rep(i, n) for (int i = 0; i < (n); i++)
#define Rep(i, a, n) for (int i = a; i < (n); i++)

using ll = long long int;
using namespace std;

const int inf = 1e9 + 7;
const ll INF = 1e18 + 10;

int SetBit(ll n, ll X) { return n | (1LL << X); }
int ClearBit(ll n, ll X) { return n & ~(1LL << X); }
int ToggleBit(ll n, ll X) { return n ^ (1LL << X); }
bool CheckBit(ll n, ll X) { return (bool)(n & (1LL << X)); }
bool isPowerOf2(ll X) {return X && ( !(X & (X-1) ) ) ; }
int CountBit(ll n) { return __builtin_popcountll(n); }

ll n, m, p, q, l, r, k, x, y, z, ans, sum;

void solve(){
    ll n,a,b;
    cin >> n >> a >> b;
    vector <ll> v;
    ll aa = 1,bb = n;
    for(int i = 1;i<=n/2-1;i++){
        while(bb == a|| bb == b)--bb;
        v.pb(bb);
        --bb;
    }
    v.pb(a);
    for(int i = 1;i<=n/2-1;i++){
        while(aa == a|| aa == b)++aa;
        v.pb(aa);
        ++aa;
    }
    v.pb(b);
    ll mx = 0,mn = INT_MAX;
    for(int i = 0;i<n/2;i++){
        mn = min(v[i],mn);
    }
    for(int i = n/2;i<n;i++){
        mx = max(v[i],mx);
    }
    if(mx == b && mn == a){
        for(auto it : v)cout << it << " ";
        cout << '\n';
    }else{
        cout << "-1\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;cin >> t;
    Rep(i, 1, t + 1)
         solve();
    return 0;
}