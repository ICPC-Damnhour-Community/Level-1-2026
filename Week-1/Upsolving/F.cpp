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

struct runner {
   string name;
   double first;
   double second;
};


signed main() {
   fast
   int n; cin >> n;

   runner r[n];
   for (int i=0; i<n; i++) {
      cin >> r[i].name >> r[i].first >> r[i].second;
   }
   sort (r, r+n, [](runner a, runner b) { return a.second < b.second; });

   double mintime = 1e18;
   string team;

   for (int i=0; i<n; i++) {
      double sum = r[i].first;
      string s = r[i].name + "\n" ;

      int j=0, ctr=0;
      while (ctr<3) {
         if (r[i].name != r[j].name) {
            sum+=r[j].second;
            s+=r[j].name + "\n";
            ctr++;
         }
         j++;
      }
      if (sum<mintime) {
         mintime = sum;
         team = s;
      }

   }
   cout << fixed << setprecision(9) << mintime << endl;
   cout << team;

}