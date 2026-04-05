#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
int main(){
    int t ; cin >> t ;
    while (t--) {
        int n ; cin >> n ;
        int a[n]; bool found = false ;
        for (int i = 0 ; i < n ;i++) {
            cin >> a[i];
        }
        for (int i = 0 ; i < n ;i++) {
            if(a[i] == 67) {
                found = true ;
                break;
            }
        }
        if(found) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
    return 0 ;
}
