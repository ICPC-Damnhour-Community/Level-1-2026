#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

void solve(){
    int n ; cin >> n ;
    int a[n] , b[n] ;
    for(int  i = 0 ; i < n ; i++) cin >> a[i] ;
    for(int  i = 0 ; i < n ; i++) cin >> b[i] ;
    vector <int> dif ;
    for(int  i = 0 ; i < n ; i++){
        if(a[i] != b[i]){
            dif.push_back(b[i]);
        }
    }
    int m ; cin >> m ;
    int have[m] ;
    for(int i = 0 ; i < m ; i++){
        cin >> have[i] ;
    }
    bool flag = 0 ;
    for(int  i = 0 ; i < n ; i++){
        if(b[i] == have[m - 1]){
            flag = 1 ;
            break;
        }
    }
    if(flag == 0){
        cout << "NO" << endl;
        return;
    }
    map <int , int> mp1;
    map <int , int> mp2;
    for (int elem : dif){
        mp1[elem]++;
    }
    for (int elem : have){
        mp2[elem]++;
    }
    for (const auto& pair : mp1) {
        if (mp2[pair.first] < pair.second) {
            cout << "NO" << endl;
            return ;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t ; cin >> t ; 
    while(t--){
        solve();
    }
    return 0;
}

