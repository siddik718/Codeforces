#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ll t;cin >> t;
    while(t--){
        string a;
        cin >> a;
        int x = a[0]-'0';
        int y = a[a.size()-1]-'0';
        int e = 0;
        for(int i = 0;i<a.size();i++){
            e += ((a[i]-'0')%2==0);
        }
        int ans;
        if(e == 0)ans = -1;
        else if(y%2 == 0)ans = 0;
        else if(x%2==0)ans = 1;
        else ans = 2;
        cout << ans << '\n';
    }
    return 0;
}