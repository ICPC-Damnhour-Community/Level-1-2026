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
const int N = 1e6 + 5;
int f(int n){

    int product  = 1;

    while(n){
        if((n%10) != 0)
            product *= (n%10);

        n /= 10;
    }

    return product;
}


int g(int n){ 
    if(n < 10){
        return n;
    }

    return g(f(n));
}
int ans[N];
int pref[N][11];
void solve(){
    for(int i=1; i<=N; i++){
        ans[i] = g(i);
    }

    for(int i=1; i<=N; i++){
        pref[i][ans[i]]++;
    }

    for(int i=1; i<=9; i++){
        for(int j=1; j<=N; j++){
            pref[j][i] += pref[j-1][i];
        }
    }

    int q; cin >> q;
    while(q--){
            int l , r , k; cin >> l >> r >> k;
            cout << pref[r][k] - pref[l-1][k] << "\n";
    }
    
}
signed main() {
    ip();
    fast
    // test
        solve();
    return 0;
}