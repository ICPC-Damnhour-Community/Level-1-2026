#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    int n , k , q ;
    cin >> n >> k >> q ;
    const int MX = 200005 ;
    vector <int> diff(MX , 0) , cnt(MX , 0) , pre(MX , 0);
    for(int i = 0 ; i < n ; i++){
        int l , r ; cin >>l >> r ;
        diff[l]++ ; diff[r + 1]--;
    }
    for(int i = 1 ; i < MX ; i++){
        cnt[i] = cnt[i - 1] + diff[i] ;
    }
    for(int i = 1 ; i < MX ; i++){
        int add = 0 ;
        if(cnt[i] >= k) add = 1 ;
        pre[i] = pre[i - 1] + add ;
    }
    while(q--){
        int a , b ; cin >> a >> b ;
        cout << pre[b] - pre[a - 1] << endl ;
    }
    return 0;
}