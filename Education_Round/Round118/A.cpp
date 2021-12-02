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
		string x1,x2;
		int p1,p2;
		cin >> x1 >> p1 >> x2 >> p2;
		ll a = x1.size()+p1,b = x2.size()+p2;
		if(a>b)cout << '>';
		else if(a<b)cout << '<';
		else{
			int x = stoi(x1),y = stoi(x2);
			if(p1 == p2){
				if(x>y)cout << '>';
				else if(x<y)cout << '<';
				else cout << '=';
			}else if(p1>p2){
				int ok = 0;
				FOR(i,x2.size()){
					int x = ((i>=x1.size())?0:x1[i]-'0');
					int y = x2[i]-'0';
					if(x>y){cout << '>';ok = 1;break;}
					else if(x<y){cout << '<';ok = 1;break;}
				}
				if(!ok)cout << '=';
			}else{
				int ok = 0;
				FOR(i,x1.size()){
					int x = x1[i] - '0';
					int y = ((i>=x2.size())?0:x2[i]-'0');
					if(x>y){cout << '>';ok = 1;break;}
					else if(x<y){cout << '<';ok = 1;break;}
				}
				if(!ok)cout << '=';
			}
		}
		cout << '\n';
	}
	return 0;
}
