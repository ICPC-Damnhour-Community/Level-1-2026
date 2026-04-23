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
const int N = 1e9+1;
const double PI = 3.141592653589793;

signed main() {
    fast
    int n, k1, k2;
    cin >> n >> k1 >> k2;
    int a[n], b[n];
    priority_queue<int>d;

    for (int i=0; i<n; i++) cin >> a[i];
    for (int i=0; i<n; i++) {
        cin >> b[i];
        d.push(abs(b[i]-a[i]));
    }

    int k = k1+k2;

    while (k--) {
        int x = d.top();
        d.pop();
        if (x>0) x--;
        else x=1;
        d.push(x);
    }
    int sum =0;
    while (!d.empty()) {
        int x = d.top();
        sum+=(x*x);
        d.pop();
    }
    cout << sum << endl;
}
