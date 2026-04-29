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
    int n, k; cin >> n >> k;
    int a[n];
    int pref[n+1];
    pref[0] = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        pref[i+1] = pref[i] + a[i];
    }
    int index =-1;
    int mini = 1e18;
    for (int i=1; i<=n-k+1; i++) {
        int sum = pref[k+i-1]-pref[i-1];
        if (sum<mini) {
            mini = sum;
            index=i;
        }
    }
    cout << index << endl;
}
