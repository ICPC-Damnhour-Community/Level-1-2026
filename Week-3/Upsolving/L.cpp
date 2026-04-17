#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    string s ;
    stack <string> st ;
    int q ; cin >> q;
    while(q--){
        int op ; cin >> op ;
        if(op == 1){
            string w ; cin >> w ;
            st.push(s);
            s += w ;
        }
        else if(op == 2){
            int x ; cin >> x ;
            st.push(s);
            s.erase(s.size() - x);
        }
        else if(op == 3){
            int k ; cin >> k ;
            cout << s[k - 1] << endl ;
        }
        else{
            if(!st.empty()){
                s = st.top() ;
                st.pop() ;
            }
        }
    }
    return 0;
}