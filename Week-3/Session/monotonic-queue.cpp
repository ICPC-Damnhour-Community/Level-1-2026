#include <bits/stdc++.h>
using namespace std;

void pre() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
/*
    leet code solution
    Sliding Window Maximum

*/

class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
        int n = a.size();
        deque<int> dq;
        vector<int> res;
        for(int i = 0 ;i<n ;i++){
            if(!dq.empty() and dq.front() == i-k) dq.pop_front();
            while(!dq.empty() and a[i] >= a[dq.back()]) dq.pop_back();
            dq.push_back(i);
            if(i >= k-1) res.push_back(a[dq.front()]); 
        }
        return res;
    }
};


int main(){
    pre();



}