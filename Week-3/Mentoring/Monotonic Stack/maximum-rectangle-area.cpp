#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> nextsmaller (vector<int>& heights){
        stack<int> st;
        int n = heights.size();
        vector<int> a = heights; 
        /*  
            2 3 4 1 0 1
        */ 
        vector<int> ans(n , n);
        for(int i = 0 ; i<n ;i++){
            while(!st.empty() and a[i] < a[st.top()]){
                ans[st.top()] = i;
                st.pop();
            }
            st.push(i);
        }
        return ans;
    }

    vector<int> prevsmaller (vector<int>& heights){
        stack<int> st;
        int n = heights.size();
        vector<int> a = heights; 
        /*  
            5 4 3 2 4 10  1
        */ 
        vector<int> ans(n , -1);
        for(int i = 0 ; i<n ;i++){
            while(!st.empty() and a[i] <= a[st.top()]){
                st.pop();
            }
            if(!st.empty()) ans[i] = st.top();
            st.push(i);
        }
        return ans;
    }
    

    int largestRectangleArea(vector<int>& heights) {
        vector<int> next = nextsmaller(heights);
        vector<int> prev = prevsmaller(heights);
        vector<int> a = heights;

        int n = heights.size();
        int ans = 0;
        for(int i = 0 ;i < n; i++){
            int w = next[i] - prev[i] - 1;
            int h = a[i];
            ans = max(ans , w*h);
        }
        return ans;
    }
};
