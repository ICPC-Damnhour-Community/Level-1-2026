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
    int t; cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int>a(n),b(m);
        map<int,int>mp1, mp2;
        for (int i=0; i<n; i++) cin >> a[i];
        for (int i=0; i<m; i++) cin >> b[i], mp1[b[i]]++;
        int ans=0, ctr=0;

        for (int i=0; i<n; i++) {
            int x = a[i];
            mp2[x]++;
            if (mp1.count(x) && mp2[x]<=mp1[x]) ctr++;
            if (i>=m-1){
                if (ctr>=k) ans++;
                x=a[i-m+1];
                mp2[x]--;
                if (mp1.count(x)) ctr--;
            }

        }
        cout << ans << endl;
    }
}
