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
const int N = 2e5+1;
const double PI = 3.141592653589793;

signed main() {
    fast
    int n; cin >> n;
    deque<int>dq;
    for (int i=0; i<n; i++) {
        int x; cin >> x;
        dq.push_back(x);
    }
    int sumS=0, sumD=0;

    for (int i=0; i<n; i++) {
        if (i%2==0) {
            if (dq.front()>=dq.back()) {
                sumS+=dq.front();
                dq.pop_front();
            }
            else {
                sumS+=dq.back();
                dq.pop_back();
            }
        }
        else {
            if (dq.front()>=dq.back()) {
                sumD+=dq.front();
                dq.pop_front();
            }
            else {
                sumD+=dq.back();
                dq.pop_back();
            }
        }
    }
    cout << sumS << " " << sumD << endl;
}
