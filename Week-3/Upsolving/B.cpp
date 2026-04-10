#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
int main() {
    fast;
    queue <int> qu ;
    int t ; cin >> t ;
    while(t--){
        ll n ; cin >> n;
        if(n == 1){
            int x ; cin >> x ;
            qu.push(x); 
        }
        else if (n == 2){
            if(!qu.empty()){
                qu.pop(); 
            }
        }
        else if(n == 3 && !qu.empty()){
            cout <<qu.front() <<endl;
        }
        else if(n == 3 && qu.empty()){
            cout <<"Empty!" <<endl;
        }
    }
   return 0 ; 
}