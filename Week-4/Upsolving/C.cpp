#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main() {
    int t ; cin >> t ;
    while(t--){
        map <int , int> mp ;
        int n , m ;
        cin >> n >> m ;
        for(int i = 0 ; i < n ; i++){
            int x ; cin >> x ; mp[x]++;
        }
        for(int j = 0 ; j < m ; j++){
            int y ; cin >> y ; mp[y]++;
        }
        int cnt = 0 ;
        for(auto k : mp){
            if(k.second == 2) cnt++;
        }
        cout << cnt << endl;
    }
   return 0 ; 
}
