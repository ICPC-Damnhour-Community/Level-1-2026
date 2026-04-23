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
const int N = 50005;
const double PI = 3.141592653589793;

signed main() {
    fast
    int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        vector<int>a(n);
        for (int i=0; i<n; i++) {
            cin >> a[i];
        }
        int f = (k+1)/2;
        int l = k/2;

        int ans = 0;

        for (int i=0; i<n; i++) {
            if (f>=a[i]) {
                f-=a[i];
                a[i]=0;
                ans++;
            }
            else {
                a[i]-=f;
                break;
            }
        }

        for (int i=n-1; i>=0; i--) {
            if (l>=a[i] && a[i]!=0) {
                l-=a[i];
                ans++;
            }
            else break;
        }
        cout << ans << endl;
    }
}