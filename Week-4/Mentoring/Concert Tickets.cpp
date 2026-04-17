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
    int n , q; cin >> n >> q;
 
    multiset <int> st;
    while (n--)
    {
        int x; cin >> x;
        st.emplace(x);
    }
 
    while (q--)
    {
        int x; cin >> x;
        auto it = st.lower_bound(x);
 
        if (*it == x)
        {
            cout << x << endl;
            st.erase(it);
        }
 
        else
        {
            if (it == st.begin())
                cout << -1 << endl;
            else
            {
                cout << *(--it) << endl;
                st.erase(it);
            }
        }
    }
}
