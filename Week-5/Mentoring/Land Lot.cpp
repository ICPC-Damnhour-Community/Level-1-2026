#include <bits/stdc++.h>
#define int long long
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define test int tttt=0;cin>>tttt;while(tttt--)
using namespace std;
void ip(){
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
int g[1002][1002];
void solve(){
    int n , m; cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> g[i][j];
            g[i][j] += g[i-1][j];
            g[i][j] += g[i][j-1];

            g[i][j] -= g[i-1][j-1];
        }
    }
    int a , b; cin >> a >> b;

    int mn = INT_MAX;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            int ii = i + a - 1;     int jj = j + b - 1;  int sum = 0;

            if(ii <= n and jj <= m){
                sum += g[ii][jj];
                sum -= g[ii][j-1];
                sum -= g[i-1][jj];
                sum += g[i-1][j-1];
                mn = min(mn , sum);
            }

            swap(a , b);
            ii =  i + a - 1;   jj = j + b - 1;   sum = 0;
            if(ii <= n and jj <= m){
                sum += g[ii][jj];
                sum -= g[ii][j-1];
                sum -= g[i-1][jj];
                sum += g[i-1][j-1];
                mn = min(mn , sum);
            }
            swap(a , b);
            
        }
    }

    cout << mn ;
    



}
signed main() {
    ip();
    fast
    // test
        solve();
    return 0;
}