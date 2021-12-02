#include<bits/stdc++.h>
#define all(var) var.begin(),var.end()
#define FOR(i,n) for(int i = 0;i<(n);i++) 
using namespace std;
using ll = long long int;
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
	int test;cin >> test;
	while(test--){
		int n;cin >> n;
		vector <int> a(n);
		FOR(i,n)cin >> a[i];
		sort(all(a));
		FOR(i,n/2){
			cout << a[i+1] << " " << a[0] << '\n';
		}
	}
	return 0;
}