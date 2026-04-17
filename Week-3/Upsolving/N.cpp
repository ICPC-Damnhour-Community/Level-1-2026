#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    ll n , x ; cin >> n >> x ;
    string s ; cin >> s;
    vector <char> v;
    for(char c : s){  
            v.push_back(c); 
    }
    for(char c : v){
        if(c == 'L'){
            x *= 2 ;
        }
        else if (c == 'U'){
            x /= 2 ;
        }
        else{
            x = x * 2 + 1 ;
        }
    }
    cout << x << endl;
    return 0;
}