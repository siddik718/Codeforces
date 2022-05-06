#include<bits/stdc++.h>
#define rep(i,a,n) for(auto i = a ; i <= (n) ; i++)
using namespace std;
using ll = long long int;
vector <string> v;
void pre(){
    for(char ch = 'a' ;ch <= 'z';ch++){
        for(char ch2 = 'a';ch2<='z';ch2++){
            if(ch==ch2)continue;
            string str;
            str += ch;str+=ch2;
            v.push_back(str);
        }
    }
}
void solve(){
    string str;cin >> str;
    int n = v.size();
    rep(i,0,n){
        if(v[i] == str){
            cout << i+1 << endl;
            return;
        }
    }
}
int main(){
    pre();
    int T;cin >> T;
    while(T--)solve();
    return 0;
}