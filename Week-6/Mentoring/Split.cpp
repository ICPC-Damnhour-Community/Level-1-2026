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
    tests
    {
        int n , k; cin >> n >> k;
        map <int,int> freq;
        int a[n]; for (int &i : a) cin >> i , freq[i]++;

        bool valid = true;
        for (auto &[x , y] : freq)
        {
            valid &= (y % k == 0);
            y /= k;
        }

        if (!valid)
        {
            cout << 0 << endl;
            continue;
        }

        vector currFreq (n + 1 , 0);
        int l = 0 , r = 0;
        long long ans = 0;
        while (r < n)
        {
            currFreq[a[r++]]++;

            while (currFreq[a[r - 1]] > freq[a[r - 1]])
                currFreq[a[l++]]--;

            ans += (r - l);
        }

        cout << ans << endl;
    }
}