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
    int n , x; cin >> n >> x;
    int a[n];
    int sum = 0;
    for(int i=0; i<n; i++){
        cin >> a[i];
        sum += a[i];
    }

    if(sum < x){
        cout << -1;
        return;
    }

    int l = 0 , r = 0;
    int val = a[0]; 

    int mn = 1e12;
    while(l <= r){
        if(val < x){
            if(r == n-1){
                break;
            }
            r++;
            val += a[r];
        }
        else{
            mn = min(mn , (r - l + 1));
            val -= a[l];
            l++;
        }
    }

    cout << mn;
}
signed main() {
    ip();
    fast
    // test
        solve();
    return 0;
}