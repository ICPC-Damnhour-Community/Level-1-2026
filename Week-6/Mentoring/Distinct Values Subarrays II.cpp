#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
#define tests int tt; cin >> tt; while(tt--)
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define inputOutput IP();
short dx[]{1, -1, 0, 0};
short dy[]{0, 0, 1, -1};
using namespace std;
constexpr int N = 1e5+5 , mod = 1e9+7;
 
void IP()
{
    fast
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}
 
int32_t main()
{
    inputOutput
    int n , k; cin >> n >> k;
    int a[n]; for (int &i : a) cin >> i;
 
    map <int,int> freq;
    int l = 0 , r = 0;
    long long ans = 0;
    while (r < n)
    {
        freq[a[r++]]++;
 
        while (freq.size() > k)
        {
            freq[a[l]]--;
 
            if (freq[a[l]] == 0)
                freq.erase(a[l]);
            l++;
        }
 
        ans += (r - l);
    }
 
    cout << ans;
}