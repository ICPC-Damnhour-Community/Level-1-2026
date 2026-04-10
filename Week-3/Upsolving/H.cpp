#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
int main(){
    string s ; cin >> s ;
    stack <char> st ;
    int cnt = 0 ;
    for(char c : s){
        if(!st.empty() && st.top() == c){
            st.pop();
            cnt++;
        }
        else{
            st.push(c);
        }
    }
    if(cnt % 2 == 0){
        cout << "No";
    }
    else{
        cout << "Yes";
    }
    return 0 ;
}
