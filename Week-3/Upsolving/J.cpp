#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    int n ; cin >> n ;
    vector <int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i] ;
    }
    int x ; cin >> x ; 
    x--;
    v.erase(v.begin() + x) ;
    int l , r ; cin >> l >> r ;
    l--; r-- ;
    v.erase(v.begin() + l , v.begin() + r) ;
    cout << v.size() << endl;
    for(int i = 0 ; i < v.size() ; i++){
       cout << v[i] << " " ;
    }
    return 0;
}