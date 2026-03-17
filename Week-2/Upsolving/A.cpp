#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    int q ; cin >> q ;
    vector<int> v; 
    while(q--){
       int o ; cin >> o ;
       if(o == 0){
        ll x ; cin >> x ;
        v.push_back(x);
       } 
       else if(o == 1 && !v.empty()){
        int p ; cin >> p ;
        cout << v[p] << endl;
       }
       else if(o == 2 && !v.empty()){
        v.pop_back();
       }
    }
    return 0 ;
}
