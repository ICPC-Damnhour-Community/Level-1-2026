#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main() {
    int n ; cin >> n ;
    map <string , int> mp ;
    while(n--){
        string s ; cin >> s ;
        if(mp[s] == 0) cout << "OK" << endl;
        else cout << s << mp[s] << endl ;
        mp[s]++;
    }
   return 0 ; 
}
