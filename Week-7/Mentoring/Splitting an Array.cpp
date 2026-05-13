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

const int N = 1e3 + 5, M = N, MOD = 1e9 + 7;

void solve() {
    int n , k; cin >> n >> k;
    vector <int> a(n); cin >> a;

    auto can = [=](int x){
        int sum = 0 , segs = 1;
        for(int i = 0 ; i<n ;i++){
            if(a[i] > x) return false;
            sum += a[i];
            if(sum > x){
                segs++;
                sum = a[i];
            }
        }
        return segs <= k;
    };

    int l = 0 , r = 1 , ans = -1;
    while(!can(r)) r*= 2;

    while(l <= r){

        int mid = l+(r-l)/2;

        if (can(mid)) r = (ans = mid) - 1;
        
        else l = mid + 1;
    }


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

