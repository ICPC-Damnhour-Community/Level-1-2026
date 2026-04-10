#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        vector <int> a(n+1) , pos(n+1);
        for(int i = 1 ; i <= n ; i++){
            cin >> a[i] ;
            pos[a[i]] = i ;
        }
        int mx = n ;
        for(int j = n ; j >= 1 ; j--){
            if(pos[j] <= mx){
                for(int i = pos[j] ; i <= mx ; i++){
                    cout << a[i] << " " ;
                }
                mx = pos[j] - 1 ;
            }
        }
        cout << endl;
    }
    return 0 ;
}