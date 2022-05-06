#include<bits/stdc++.h>
#define rep(i,a,n) for(auto i = a ; i <= (n) ; i++)
using namespace std;
using ll = long long int;
void solve(){
    string s,t;
    cin >> s >> t;
    ll n = s.size(),m = t.size();
    if(m == 1 && t == "a"){
        cout << 1 << endl;
        return;
    }
    rep(i,0,m){
        if(t[i] == 'a'){
            cout << -1 << endl;
            return;
        }
    }
    cout << (ll)(1LL<<n) << endl;
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}