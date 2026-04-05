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
    int a[n];
    for(int i=0; i<n ;i++){
        cin >> a[i];
    }
    sort(a , a+n);
    int c = 1;
    for(int i=1; i<n; i++){
        if(a[i] > a[i-1]){
            c++;
        }
    }
    cout << c << "\n";
}
signed main() {
    ip();
    fast
    test
        solve();
    return 0;
}