#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    int n ; cin >>  n ;
    string s ; cin >> s ;
    deque <int> d ;
    d.push_back(n);
    for(int i = n - 1 ; i >= 0 ; i--){
        if(s[i] == 'R'){
            d.push_front(i);
        }
        else{
            d.push_back(i);
        }
    }
    while(!d.empty()){
        cout << d.front() << " ";
        d.pop_front() ;
    }
    return 0;
}