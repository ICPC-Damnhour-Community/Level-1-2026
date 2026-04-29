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
    int suff[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        suff[i] = a[i];
    }

    for(int i =n-2; i>=0; i--){
        suff[i] += suff[i+1];
    }

    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum += (a[i] * suff[i+1]);
    }

    cout << sum << "\n";

    
}
signed main() {
    ip();
    fast
    test
        solve();
    return 0;
}