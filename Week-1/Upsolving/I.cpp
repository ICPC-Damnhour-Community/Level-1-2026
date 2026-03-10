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
    int n; cin >> n;

    string s[n];
    for(int i = 0; i < n; i++) cin >> s[i];

    sort (s, s + n, [](string a, string b) {
        if (a.size()==b.size()) return a < b;
        return a.size() < b.size();
    });

    for (int i = 0; i < n; i++) cout << s[i] << '\n';


}