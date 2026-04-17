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
    int n , q;
    cin >> n >> q;

    vector <string> strings(n);
    for (string &s : strings)
        cin >> s;

    set <string> st;
    vector <string> ques(q);
    for (string &s : ques)
    {
        cin >> s;
        st.insert(s);
    }

    map <string , int> freq;
    for (string &s : strings)
    {
        string currPrefix;
        for (char &c : s)
        {
            currPrefix += c;
            if (st.find(currPrefix) != st.end())
                freq[currPrefix]++;
        }
    }

    for (string &s : ques)
        cout << freq[s] << endl;
}