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


signed main() {
    fast
    string s, t;
    cin >> s >> t;
    int n = max(s.size(), t.size());
    vector<char> v;
    for (int i=1; i<=n; i++) {
        if (s[s.size()-i] == t[t.size()-i]) {
            v.push_back(s[s.size()-i]);
        }
        else break;
    }
    cout << s.size() + t.size() - 2 * v.size() << endl;
}
