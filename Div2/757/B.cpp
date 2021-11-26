#include<bits/stdc++.h>
#define FOR(i,n) for(int i = 0;i<(n);i++) 
using namespace std;
using ll = long long int;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	ll test;cin >> test;
	while(test--){
		ll n,sum = 0;
		cin >> n;
		vector < pair<ll,ll> > a(n);
		vector <ll> b(n+1),tmp(n);
		FOR(i,n){
			cin >> a[i].first;
			a[i].second = i+1;
			tmp[i] = a[i].first;
		}
		b[0] = (n+1)/2;
		ll x = b[0],m = 2;
		sort(a.begin(),a.end(),greater<pair<ll,ll>>());
		FOR(i,n){
			while(x == b[0])++x;
			b[a[i].second] = x;
			if(i%2 == 0)x -= m;
			else x += m;
			++m;
		}
		FOR(i,n){
			sum += (tmp[i]*(2*abs(b[0]-b[i+1])));
		}
		cout << sum << '\n';
		FOR(i,n+1)cout << b[i] << " \n"[i==n];
	}
	return 0;
}