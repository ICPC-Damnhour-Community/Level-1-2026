#include <bits/stdc++.h>
#include <iomanip>
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
   int n , k; cin >> n >> k;
   vector<int> a(n); cin >> a;

    
    auto can = [=](double x){
        int cnt = 0;
        for(int i = 0 ; i<n ;i++){
            cnt += floor(a[i]/x);
        }
        return cnt >= k;
    };
    double l = 0, r = 1;
    while(can(r)) r *= 2;
    for(int i = 0 ; i<70 ;i++){
        double mid = l + (r - l)/2.0;
        if(can(mid)){
            l = mid;
        }
        else{
            r = mid;
        }
    }
    cout << fixed << setprecision(10) << l << endl;
}

signed main() {
    int t = 1;
    // cin >> t;
    for (int tt = 1; tt <= t; tt++) {
        // cout << "Case " << tt << ": ";
        solve();
    }
}

