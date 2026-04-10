#include <bits/stdc++.h>
using namespace std;

void pre() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void nextGreaterbrtute(){
    int n ; cin >> n;
    int a[n] ; for(int &i : a) cin >> i;

    for(int i = 0 ; i<n ;i++){
        bool found = false;
        for(int j = i+1 ; j<n ;j++){
            if(a[j] > a[i]){
                cout << a[j] << " ";
                found = true;
                break;
            } 

        }
        if(!found) cout << -1 << " ";
    }
}

void nextGreater(){
    int n; cin >> n;
    int a[n]; for(int &i : a) cin >> i;
    stack<int> st;
    vector<int> ans(n , -1);
    for(int i = 0 ; i<n ;i++){
        while (!st.empty() and a[i] > a[st.top()])
        {
            ans[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i = 0 ; i<n ;i++) cout << ans[i] << " ";

}


void nextSmaller(){
    int n; cin >> n;
    int a[n]; for(int &i : a) cin >> i;
    stack<int> st;
    vector<int> ans(n , -1);
    for(int i = 0 ; i<n ;i++){
        while (!st.empty() and a[i] < a[st.top()])
        {
            ans[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i = 0 ; i<n ;i++) cout << ans[i] << " ";
    
}

void prevGreater(){
    int n; cin >> n;
    int a[n]; for(int &i : a) cin >> i;
    stack<int> st;
    vector<int> ans(n , -1);
    for(int i = 0 ; i<n ;i++){
        while (!st.empty() and a[i] >= a[st.top()]) st.pop();
        if(!st.empty()) ans[i] = a[st.top()];
        st.push(i);
    }
    for(int i = 0 ; i<n ;i++) cout << ans[i] << " ";

}

void prevGreaterFromNextGreater(){
    int n; cin >> n;
    int a[n]; for(int &i : a) cin >> i;
    stack<int> st;
    vector<int> ans(n , -1);
    for(int i = n-1 ; i>=0 ;i--){
        while (!st.empty() and a[i] > a[st.top()])
        {
            ans[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    for(int i = 0 ; i<n ;i++) cout << ans[i] << " ";

}

int main(){
    pre();
    // nextGreaterbrtute();
    // cout << endl;
    // nextGreater();
    // prevGreater();
    
}