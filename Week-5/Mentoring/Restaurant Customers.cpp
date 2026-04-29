#include <bits/stdc++.h>
#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define test int tttt=0;cin>>tttt;while(tttt--)
using namespace std;
void ip(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
 
void solve(){
    int n; cin >> n;
    map<int,int>mp;
    for(int i=0;i<n; i++){
        int l , r; cin >> l >> r;
        mp[l] += 1;
        mp[r] -= 1;
    }
    
    int sum = 0;
    int mx = -1;
 
    for(auto i : mp){   
        sum += i.second;
        mx= max(mx , sum);
    }
    cout << mx;
}
signed main() {
    ip();
    fast
    // test
        solve();
    return 0;
}