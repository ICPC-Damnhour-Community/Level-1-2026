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

const int N = 1e5 + 5, M = N, MOD = 1e9 + 7;

void solve() {
    int n , k ; cin >> n >> k;
    vector<int> a(n); cin >> a;
    auto can = [=](int x) {
        int cnt = 0;
        for (int i =0 ; i<n ;i++) {
           if (a[i] < x) cnt += (x-a[i]);
        }
        return cnt <= k;
    };
    int l = 0 , r = 1e10 , ans = 0;
    while (l <= r) {
        int mid = (r+l)/2;
        if (can(mid)) {
            ans = mid;
            l = mid+1;
        }else {
            r = mid-1;
        }
    }
    cerr << endl;
    cout << ans << endl;
}

signed main() {
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        // cout << "Case " << tt << ": ";
        solve();
    }
}

