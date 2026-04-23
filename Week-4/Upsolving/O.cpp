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
const int N = 1e6+5;
const double PI = 3.141592653589793;


signed main() {
    fast
    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        int a[n];
        for (int i=0; i<n; i++) cin >> a[i];

        int x = a[0];
        int ctr=0, mn=1e9;
        for (int i=0; i<n; i++) {
            if (a[i]==x)ctr++;
            else {
                if (ctr>0) {
                    mn=min(mn,ctr);
                    ctr=0;
                }
            }
        }
       if (ctr>0) mn=min(mn,ctr);

        if (mn==n)cout << -1 << endl;
        else cout << mn << endl;

    }
}
