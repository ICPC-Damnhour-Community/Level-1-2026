#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define int long long
const int OO = static_cast<int>(1e17);
const int N = 40 + 5, M = N, MOD = 1e9 + 7;
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

void pre() {
    fast
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

struct Time {
    int t , val;
};

void solve() {
    int n ; cin >> n;
    Time a[2*n];
    for (int i = 0 ; i<2*n ; i++) {
        int x ; cin >> x;
        a[i].t = x;
        if ((i%2)==0) {
            a[i].val = 1;
        }
        else {
            a[i].val = -1;
        }
    }

    sort(a , a+(2*n) ,[](Time a , Time b) {
        return a.t < b.t;
    });

    int sum = 0 , ans = 0;
    for (int i = 0 ; i<2*n ;i++) {
        sum += a[i].val;
        ans = max(ans , sum);
    }
    cout << ans << endl;

}

signed main() {
    pre();
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
        if (t) cout << endl;
    }
}
