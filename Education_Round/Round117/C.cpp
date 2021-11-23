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
   cin >> k >> x;
   l = 1;r = 2*k-1;
   sum = k*k;ans = 0;
   while(l<=r){
       ll mid = (l+r)/2;
       ll need = (mid*(mid-1))/2;
       if(mid > k){
           ll a = mid - k;
           ll b = k - a;
           ll c = (b*(b+1))/2;
           need = sum - c;
       }
       if(x > need){
           ans = mid;
           l = mid+1;
       }else{
           r = mid-1;
       }
   }
   cout << ans << '\n';
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;cin >> t;
    Rep(i, 1, t + 1)
         solve();
    return 0;
}