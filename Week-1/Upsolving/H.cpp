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
const int N = 1e9 +1;

struct str {
    int time;
    int type;
};

signed main() {
    fast
    int n; cin >> n;

    int size = 2*n;

    str r[size];
    for (int i = 0; i<n; i++) {
        int a, b; cin >> a >> b;
        r[i] = {a, 1};
        r[i+n] = {b, -1};
    }

    sort(r, r+size, [] (str a, str b) {
        return a.time < b.time;
    });

    int sum=0, maxsum=0;
    for (int i = 0; i < 2*n; i++) {
        sum += r[i].type;
        maxsum = max(maxsum, sum);

     }
    cout << maxsum << endl;

}