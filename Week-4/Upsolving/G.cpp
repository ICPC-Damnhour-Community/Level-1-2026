#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;
const int N = 1e6 + 5 ;
ll arr[N][3];

int main(){
    int t ; cin >> t ; 
    while(t--){
        ll n ; cin >> n;
        for(int i = 0 ; i <= n ; i++){
            arr[i][1] = 0 ; arr[i][0] = 0 ;
         }
        for(int i = 1 ; i <=n ; i++){
            int x ,  y ;
            cin >> x >> y ;
            arr[x][y] = 1 ;
        }
        ll cnt = 0 ;
        for(int i = 0 ; i <= n ; i++){
            if(arr[i][0] == 1 && arr[i][1] == 1) {
                cnt++;
            }
        }
        ll ans = 0 ;
        for(int i = 0 ; i < n - 1 ;i++){
            if(arr[i][1] == 1 && arr[i + 1][0] == 1 && arr[i + 2][1] == 1){
                ans++;
            }
            if(arr[i][0] == 1 && arr[i + 1][1] == 1 && arr[i + 2][0] == 1){
                ans++;
            }
        }
            cout << ans + cnt * (n - 2) << endl;
    }
    return 0;
}