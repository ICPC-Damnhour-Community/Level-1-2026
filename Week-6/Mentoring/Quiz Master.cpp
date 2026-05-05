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

    array <vector <int> , N + 1> divs;
    for (int i = 1; i <= N; i++) {
        for (int j = i; j <= N; j += i) {
            divs[j].emplace_back(i);
        }
    }

    tests
    {
        int n , m; cin >> n >> m;
        int a[n]; for (int &i : a) cin >> i;

        if (m == 1)
        {
            cout << 0 << endl;
            continue;
        }

        sort (a , a + n);
        vector freq (m + 1 , 0);
        int l = 0 , r = 0 , ans = 1e9 , coveredTopics = 0;
        while (r < n)
        {
            for (int &i : divs[a[r]])
            {
                if (i > m)
                    continue;

                freq[i]++;
                if (freq[i] == 1)
                    coveredTopics++;
            }
            r++;

            while (l < n and coveredTopics == m)
            {
                ans = min (ans , a[r - 1] - a[l]);

                for (int &i : divs[a[l]])
                {
                    if (i > m)
                        continue;

                    freq[i]--;
                    if (freq[i] == 0)
                        coveredTopics--;
                }

                l++;
            }
        }

        cout << (ans == 1e9 ? -1 : ans) << endl;
    }
}