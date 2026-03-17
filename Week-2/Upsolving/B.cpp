#include <bits/stdc++.h>
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        int n ; cin >>  n ;
        int a[n + 1];
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i] ;
        }
        int ans = 3 ;
        for(int i = 1 ; i <= n ; i++){
            if(a[a[i]] == i){
                ans = 2 ;
                break ;
            }
        }
        cout << ans << endl;

    }
    return 0 ;
}