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
const int N = 1e6+5;
const double PI = 3.141592653589793;

vector<int>pad(N);

signed main() {
    fast
    int t; cin >> t;
    while (t--){
        int n, k; cin >> n >> k;
        vector<int>a(n);
        map<int,int>mp;
        for (int i=0; i<n; i++) {
            cin >> a[i];
            mp[a[i]]++;
        }
        sort(a.begin(), a.end());
        deque<int>dq;
        dq.push_back(a[0]);
        int ctr=1, mx=1;

        for (int i=1; i<n; i++) {
            if (a[i]==a[i-1]) ctr++;
            else if (a[i]==a[i-1]+1) {
                if (dq.size()<k) {
                    ctr++;
                    dq.push_back(a[i]);
                }
                else {
                    ctr+=1-mp[dq.front()];
                    dq.pop_front();
                    dq.push_back(a[i]);
                }
            }
            else {
                dq.clear();
                dq.push_back(a[i]);
                ctr=1;
            }
            mx=max(mx,ctr);
        }
        cout << mx << endl;

    }
}
