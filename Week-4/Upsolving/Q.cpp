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
    int n, x;
    cin >> n >> x;
    vector<int>a(n);
    map<int,int>pos;

    for (int i=0; i<n; i++) {
        cin >> a[i];

    }

    for (int i=0; i<n; i++) {
        int f = a[i];
        if (x>f) {
            int sec = x-f;
            if (pos[sec]) {
                cout << pos[sec] << " " << i+1 <<endl;
                return 0;
             }
            pos[a[i]]=i+1;
        }
    }
    cout << "IMPOSSIBLE\n";

}
