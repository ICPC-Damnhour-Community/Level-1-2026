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
int n , m;
bool can(int x){
    if(x == m){
        return 1;
    }
    if(x < m){
        return 0;
    }
    if(x%3 != 0){
        return 0;
    }


    return (can(x * 2 / 3) || can(x / 3));
}

void solve(){
    cin >> n >> m;
    (can(n)) ? (cout << "YES\n") : (cout << "NO\n");
}
signed main() {
    ip();
    fast
    test
        solve();
    return 0;
}