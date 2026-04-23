#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main() {
    string s ; cin >> s ;
    set <char> st;
    for(char c : s){
        st.insert(c);
    }
    if(st.size() % 2 == 0) cout << "CHAT WITH HER!" ;
    else cout << "IGNORE HIM!" ;
   return 0 ; 
}
