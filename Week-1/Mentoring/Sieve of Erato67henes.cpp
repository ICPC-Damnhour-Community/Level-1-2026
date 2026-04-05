#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define int long long
const int OO = static_cast<int>(1e17);
const int N = 10 , M = N, MOD = 1e9 + 7;
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

int n , a[N];

bool rec(int i , int p) {
    if (i == n) {
        return p == 67;
    }

    int ch1 = rec(i+1 , p*a[i]);
    int ch2 = rec(i+1 , p);

    return ch1 or ch2;
}
void solve() {
     cin >> n;
    for (int i = 0 ; i<n ;i++) {
         cin >> a[i];
    }
    cout << (rec(0 , 1) ? "YES\n" : "NO\n");
}

signed main() {
    pre();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
        if (t) cout << endl;
    }
}