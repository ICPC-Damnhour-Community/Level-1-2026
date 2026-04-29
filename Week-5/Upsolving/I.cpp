#include <iostream>
#include <algorithm>
#include <climits>
#include <cmath>
#include <vector>
#include <iomanip>
#include <queue>
#include <cstdio>
#include <iterator>
#include <set>
#include <deque>
#include <stack>
#include <string>
#include <cstdlib>
#include <ctime>
#include <iterator>
#include <unordered_map>
#include <unordered_set>
#include <sstream>
#include <list>
#include <memory>
#include <numeric>
#include <map>


using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define int long long
const int N = 2e6;
const double PI = 3.141592653589793;

struct  operations {
    int l, r, d;
};

signed main() {
    fast
    int n, m, k;
    cin >> n >> m >> k;
    vector<int>a(n+2);
    vector<int>b(n+2, 0);
    vector<int>c(m+2, 0);
    operations op[m+1];

    for (int i = 1; i <=n; i++) {
        cin>>a[i];
    }
    for (int i = 1; i <= m; i++) {
        cin >> op[i].l >> op[i].r >> op[i].d;

    }
    for (int i = 0; i < k; i++) {
        int x, y; cin >> x >> y;
        c[x]+=1;
        c[y+1]-=1;

    }
    for (int i = 1; i <= m; i++) {
        c[i]+=c[i-1];
    }

    for (int i = 1; i <= m; i++) {
        int l = op[i].l, r = op[i].r , d = op[i].d;
        b[l]+=d*c[i];
        b[r+1]-=d*c[i];
    }

    for (int i = 1; i <= n; i++) {
        b[i]+=b[i-1];
    }

    for (int i = 1 ; i <= n; i++) {
        cout << b[i] + a[i] << " " ;
    }
    return 0;
}