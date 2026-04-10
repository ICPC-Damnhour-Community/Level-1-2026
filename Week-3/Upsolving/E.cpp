#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
int main(){
    int n ; cin >> n ;
    string s ; cin >> s ;
    vector <int> super(n + 1 , 0);
    stack <int> st;
    for(int i = 0 ; i < s.size();){
        if(isdigit(s[i])){
            int num = 0 ;
            while(i <s.size() && isdigit(s[i])){
                num = num * 10 + (s[i] - '0') ;
                i++;
            }
            if(!st.empty()){
                super[num] = st.top();
            }
            else{
                super[num] = 0 ;
            }
            st.push(num);
        }
        else if(s[i] == ')'){
            st.pop();
            i++;
        }
        else{
            i++;
        }
    }
    for(int i = 1 ; i <= n ; i++){
        cout << super[i] << " " ;
    }
    return 0 ;
}
