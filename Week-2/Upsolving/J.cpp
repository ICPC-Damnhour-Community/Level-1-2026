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
    string s;
    getline(cin, s);
    vector<int>vis(26,0);
    for (int i=0; i<s.size(); i++) {
        if (s[i]>='a' && s[i]<='z') {
            vis[s[i]-'a'] = 1;
        }

    }
    int ctr = 0;
    for (int i=0; i<26; i++) {
         ctr += vis[i];
    }
    cout << ctr;
}
