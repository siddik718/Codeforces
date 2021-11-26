#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0;i<(n);i++) 
using namespace std;
using ll = long long int;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	ll test;cin >> test;
	while(test--){
		ll n,l,r,k;
		cin >> n >> l >> r >> k;
		vector <ll> a(n);
		FOR(i,n)cin >> a[i];
		sort(a.begin(),a.end());
		ll sum = 0,ans = 0;
		FOR(i,n){
			if(a[i] >= l && a[i] <= r && sum+a[i]<=k){
				sum += a[i];
				ans++;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}