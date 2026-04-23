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


signed main() {
    fast
    int n; cin >> n;
    vector<int>a(n+1), freq(N, 0);
    set<int>s;
    for (int i=1; i<=n; i++) {
        cin >> a[i];
        freq[a[i]]++;
    }
    for (int i=1; i<N; i++) {
        if (freq[i]==0) s.insert(i);
    }

    int q; cin >> q;
    while (q--) {
        int x; cin >> x;
        int cur = a[x];
        auto it = s.upper_bound(cur);
        int nxt = *it;
        cout << nxt << endl;

        s.erase(it);
        s.insert(cur);
        a[x]=nxt;
    }
}
