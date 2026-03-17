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
    string s; cin >> s;
    int n = s.size();
    vector<pair<int, pair<int, char>>>v(n);
    int balance =0;
    for (int i = 0; i < n; ++i) {
      v[i] = {balance, {i, s[i]}};
        if (s[i] == '(') balance++;
        else balance--;
    }
    sort(v.begin(), v.end(), [](auto &a, auto &b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second.first>b.second.first;
    });
    for (int i = 0; i < n; ++i) cout << v[i].second.second;

}
