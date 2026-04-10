#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
int main() {
    fast;
    stack <int> s ;
    int t ; cin >> t ;
    while(t--){
        ll n ; cin >> n;
        if(n == 1){
            int x ; cin >> x ;
            s.push(x);
        }
        else if (n == 2){
            if(!s.empty()){
                s.pop();
            }
        }
        else if(n == 3 && !s.empty()){
            cout << s.top() <<endl;
        }
        else if(n == 3 && s.empty()){
            cout <<"Empty!" <<endl;
        }
   }
   return 0 ; 
}