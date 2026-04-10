#include <bits/stdc++.h>
using namespace std;

void pre() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void stackkk(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout << st.size() << endl;
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }

    cout << st.size() << endl;
}

int main(){
    pre();
    stackkk();
    
}