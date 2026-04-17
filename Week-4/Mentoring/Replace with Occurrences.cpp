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
    tests
    {
        int n; cin >> n;
        map <int,int> freq , needed;
        vector <int> a(n);
        for (int &i : a) cin >> i , freq[i]++;

        bool valid = true;
        for (auto &[x , y] : freq)
        {
            valid &= (y % x == 0);
            needed[x] = y / x;
        }

        if (!valid)
        {
            cout << -1 << endl;
            continue;
        }

        int i = 1;
        map <int , vector <pair<int,int>>> nums;
        for (auto &[x , y] : needed)
        {
            while (y--)
            {
                nums[x].emplace_back(i , x);
                i++;
            }
        }

        for (int &x : a)
        {
            cout << nums[x].back().first << " ";

            nums[x].back().second--;
            if (nums[x].back().second == 0)
                nums[x].pop_back();
        }

        cout << endl;
    }
}