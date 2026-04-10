#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define int long long
#define endl "\n"
const int OO = static_cast<int>(1e18);
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

template<typename T = int>
istream &operator >>(istream &in, vector<T> &v) {
    for (auto &x: v) in >> x;
    return in;
}

template<typename T = int>
ostream &operator <<(ostream &out, const vector<T> &v) {
    for (const T &x: v) out << x << ' ';
    return out;
}
void pre() {
    fast
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
const int N = 2e5 + 5, M = N, MOD = 1e9 + 7;

int n;
vector<int> a;
vector<int> nextNOTequle() {
    stack<int> st;
    vector<int> ans(n, n);
    for (int i = 0; i < n; i++) {
        while (!st.empty() and a[i] != a[st.top()]) {
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    return ans;
}

void solve() {
    cin >> n;
    a = vector<int> (n);
    for (int i = 0 ; i<n ;i++) cin >> a[i];
    auto next = nextNOTequle();
    int q ; cin >> q;
    while (q--) {
        int l, r;
        cin >> l >> r;
        l-- , r--;
        /*
          1 {1 1 1} 3

          1 3

         */
        int idx = next[l];
        if (idx > r) cout << "-1 -1\n";
        else cout << l+1 << " " << idx+1 << endl;
    }
    cout << endl;

}

signed main() {
    pre();
    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        // cout << "Case " << tt << ": ";
        solve();
    }
}