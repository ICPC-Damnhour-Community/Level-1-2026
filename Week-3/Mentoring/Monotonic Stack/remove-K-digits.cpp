#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string removeKdigits(string s , int k) {
        stack<char> st;
        int n = s.size();
        for (int i = 0 ; i<n ;i++) {
            while (!st.empty() and k and st.top() > s[i]) {
                k--;
                st.pop();
            }
            st.push(s[i]);
        }
        while (!st.empty() and k) {
            k--;
            st.pop();
        }
        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin() , ans.end());

        int x = 0 ; while (ans[x] == '0') x++;

        string res = "";
        for (int i = x ; i<ans.size() ; ++i) res+=ans[i];
        if (res.size() == 0) return "0";
        return res;
    }
};