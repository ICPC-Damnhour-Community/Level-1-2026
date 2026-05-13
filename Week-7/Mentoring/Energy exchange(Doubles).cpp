#include <bits/stdc++.h>
#define tests int t; cin >> t; while(t--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
using namespace std;
const int N = 1e5+5 , mod = 1e9+7;
double pr , n;
vector <double> vs;
bool valid (double m)
{
    double low = 0 , high = 0;
    for (double elem : vs)
    {
        if (elem > m) high += elem - m;
        else low += m - elem;
    }
    double keep = 1.0 - (pr / 100);
    double needed = (high * keep);
    return (needed >= low);
}
void IP ()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}



int32_t main()
{
    IP();
    fast
    cin >> n >> pr;
    vs.resize(n);
    for (int i = 0 ; i < n ; i++) cin >> vs[i];
    double l = 0 , r = *max_element (vs.begin() , vs.end());
    for (int i = 1 ; i <= 69 ; i++)
    {
        double mid = (l + r) / 2;
        if (valid(mid)) l = mid;
        else r = mid;
    }
    cout << fixed << setprecision(7) << l;
}
