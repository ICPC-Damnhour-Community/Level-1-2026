#include <bits/stdc++.h>
#define tests int tt; cin >> tt; while(tt--)
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define inputOutput IP();
short dx[]{1, -1, 0, 0};
short dy[]{0, 0, 1, -1};
using namespace std;
constexpr int N = 1e3+5 , mod = 1e9 + 7;

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
    int n; cin >> n;
    map <string , int> freq;

    int ans = 0;
    for (int i = 0 ; i < n ; i++)
    {
        string s; cin >> s;
        ans = max (ans , ++freq[s]);
    }

    cout << ans;
}