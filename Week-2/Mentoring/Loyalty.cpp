#include <bits/stdc++.h>
#define tests int tt; cin >> tt; while(tt--)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define endl "\n"
short dx[]{1, -1, 0, 0};
short dy[]{0, 0, 1, -1};
using namespace std;

constexpr int N = 105, mod = 1e9 + 7;

void IP()
{
#ifndef ONLINE_JUDGE
    freopen("Input.txt", "r", stdin);
    freopen("Output.txt", "w", stdout);
#endif
}

int32_t main()
{
    IP();
    tests
    {
        int n; cin >> n;
        int a[n + 1];

        for (int i = 1 ; i <= n ; i++)
            cin >> a[i];

        for (int i = 1 ; i <= n / 2 ; i++)
        {
            int curr = i;
            vector <int> idxs , elems;
            while (curr <= n)
            {
                idxs.emplace_back(curr);
                elems.emplace_back(a[curr]);
                curr *= 2;
            }

            sort (elems.begin() , elems.end());
            for (int j = 0 ; j < idxs.size() ; j++)
                a[idxs[j]] = elems[j];
        }

        cout << (is_sorted(a + 1 , a + n + 1) ? "YES" : "NO") << endl;
    }
}