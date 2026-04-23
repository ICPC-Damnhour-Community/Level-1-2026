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
    int n; cin >> n;
    vector<int> freq(N, 0);
    int maxint = 0;
    for (int i = 0; i < n; i++) {
        int x; cin >> x;
        freq[x]++;
        maxint = max(maxint, x);
    }
    deque<int> up, down;
    for (int i = 1; i <= maxint; i++) {
        if (freq[i] >= 1) {
            up.push_back(i);
        }
    }
    for (int i = maxint; i >= 1; i--) {
        if (freq[i] >= 2) {
            down.push_back(i);
        }
    }
    if (!down.empty() && down.front() == up.back()) {
        down.pop_front();
    }
    cout << up.size() + down.size() << '\n';
    for (auto x : up) cout << x << " ";
    for (auto x : down) cout << x << " ";
}
