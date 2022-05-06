#include<bits/stdc++.h>
#define rep(i,a,n) for(auto i = a ; i <= (n) ; i++)
using namespace std;
using ll = long long int;
void solve(){
    int x,y;cin >> x >> y;
    rep(b,1,100){
        int tmp = x;
        rep(a,1,100){
            if(tmp>y)break;
            tmp = tmp * b;
            if(tmp == y){
                cout << a << " " << b << "\n";
                return;
            }
        }
    }
    cout << "0 0\n";
}
int main(){
    int T;cin >> T;
    while(T--)solve();
    return 0;
}