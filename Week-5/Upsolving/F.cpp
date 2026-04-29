#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    int n ; cin >> n ;
    vector <int> a(n) ;
    for(int i = 0  ; i < n ; i++){
        int x , mx = 0 ;
        for(int j = 0  ; j < n ; j++){
            cin >> x ;
            mx = max(mx , x) ;
        }
        a[i] = mx ;
    }
    for(int i = 0  ; i < n ; i++){
        if(a[i] == n - 1){
            a[i] = n ;
            break ;
        }
    }
    for(int i = 0  ; i < n ; i++){
        cout << a[i] << " " ;
    }
    return 0;
}