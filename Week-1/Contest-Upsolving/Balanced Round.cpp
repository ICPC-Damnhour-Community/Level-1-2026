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
    int n , k; cin >> n >> k;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    sort(a , a+n);

    int c = 0;
    int mx = -1;
    for(int i=1; i<n; i++){
        if(abs(a[i]-a[i-1]) <= k){
            c++;
        }
        else{
            mx = max(mx , (c + 1));
            c = 0;
        }
    }

    mx = max(mx , c+1);

    cout << n - (mx) << "\n";
}
signed main() {
    ip();
    fast
    test
        solve();
    return 0;
}