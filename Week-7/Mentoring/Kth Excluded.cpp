#include <algorithm>
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
    int n , q; cin >> n >> q;
    vector<int> a(n); cin >> a;
    sort(all(a));
    
    while(q--){
        
        int k ; cin >> k;
        int l = 0 , r = 2e18 , ans = 0 , mid;
        
        while(l <= r){
            mid = l + (r - l) / 2;
            int cnt = upper_bound(all(a) , mid) - a.begin();
            if(mid - cnt >= k){
                ans = mid;
                r = mid - 1; 
            }
            else{
                l = mid + 1;
            }
        }
        cout << ans << endl;
    }
}

signed main() {
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        // cout << "Case " << tt << ": ";
        solve();
    }
}

