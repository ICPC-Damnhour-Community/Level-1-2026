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
        int n , factor;
        cin >> n >> factor;
        int a[n]; for (int &i : a) cin >> i;

        sort (a , a + n);
        long long i = 0 , j = n - 1 , bonus = 0 , rem = 0;
        vector <int> order;

        while (i <= j)
        {
            if ((rem + a[j]) >= factor)
            {
                bonus += a[j];
                rem += a[j];
                rem %= factor;
                order.emplace_back(a[j]);
                j--;
            }
            else
            {
                rem += a[i];
                order.emplace_back(a[i]);
                i++;
            }
        }

        cout << bonus << endl;
        for (int &x : order) cout << x << " ";
        cout << endl;
    }
}