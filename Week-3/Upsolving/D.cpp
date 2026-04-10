#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define ll long long
#define endl '\n'
int main() {
    stack <char> stk;
    string s ; cin >> s;
    int cnt = 0 ;
    for(int i = 0 ; i < s.size() ; ++i){
        if(s[i] == '('){
            stk.push(s[i]);
        }
        else if(s[i] == ')'){
            if(!stk.empty()){
                stk.pop();
                cnt+=2;
            }
        }
    }
    cout << cnt << endl;
   return 0 ; 
}