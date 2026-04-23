#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main() {
    int n; cin >> n ;
    priority_queue<int , vector<int> , greater<int>> pq ;
    vector <string> ans ;
    while(n--){
        string op ; cin >> op ;
        if(op == "insert"){
            int x; cin >> x ;
            pq.push(x);
            ans.push_back("insert " + to_string(x));
        }
        else if(op == "getMin"){
            int x ; cin >> x;
            while(!pq.empty() && pq.top() < x){
                pq.pop();
                ans.push_back("removeMin");
            }
            if(pq.empty() || pq.top() > x){
                pq.push(x);
                ans.push_back("insert " + to_string(x));
            }
            ans.push_back("getMin " + to_string(x));
        }
        else{
            if(pq.empty()){
                pq.push(0) ;
                ans.push_back("insert 0");
            }
            pq.pop();
            ans.push_back("removeMin");
        }
    }
    cout << ans.size() << endl;
    for(auto &s : ans) cout << s << endl;
   return 0 ; 
}
