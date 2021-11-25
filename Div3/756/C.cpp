#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
int main(){
    ll t;cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        deque<int> b;
        for (int i = 0; i < n;i++)cin >> a[i];
        int l = 0, h = n-1;
        if(a[0]!=n && a[n-1]!=n){
            cout << "-1" << endl;
            continue;
        }
        while(l<=h){
            if(a[l]<a[h]){
                b.push_front(a[l]);
                l++;
            }
            else{
                b.push_back(a[h]);
                h--;
            }
        }
        for(auto x:b)
            cout << x <<" ";
        cout << endl;
    }
    return 0;
}