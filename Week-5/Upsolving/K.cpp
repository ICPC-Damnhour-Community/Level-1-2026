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
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n + 1), b(n + 1);

        for (int i = 1; i <= n; i++) cin >> a[i];

        sort(a.begin() + 1, a.end(), greater<int>());

        for (int i = 1; i <= n; i++) {
            cin >> b[i];
            b[i] += b[i - 1];
        }

        int ans = 0;

        for (int i = 1; i <= n; i++) {
            if (b[i] > n) break;
            int x = a[b[i]];
            ans = max(ans, i * x);
        }

        cout << ans << '\n';
    }
    return 0;

}