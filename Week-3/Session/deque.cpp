#include <bits/stdc++.h>
using namespace std;

void pre() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}


void dqqq(){

    int n ; cin >> n;
    deque<int> dq(n);
    for(int i = 0 ; i<n ;i++) cin >> dq[i];

    dq.push_back(5);
    dq.pop_back();
    
    for(int i = 0 ; i<dq.size() ;i++) cout << dq[i] << " ";
    cout << endl;

    dq.push_front(5);
    dq.pop_front();
    dq.empty();
    for(int i : dq) cout << i << " ";
    for(int i = 0 ; i<dq.size() ;i++) cout << dq[i] << " ";


}
int main(){
    pre();
    // dqqq();
    
    int q ; cin >> q;
    deque <int> v;
    bool isreversed = false;
    while (q--) 
    {
        string s ; cin >> s;
        if(s == "back"){ 
            if(v.empty()){        
                cout << "No job for Ada?\n";
                continue;
            }
            if(!isreversed)
            {
                cout << v.back() << endl;
                v.pop_back();
            }
            else {
                cout << v.front() << endl;
                v.pop_front();
            }
        }
        else if(s == "front"){
            if(v.empty()){        
                cout << "No job for Ada?\n";
                continue;
            }
            if(!isreversed)
            {
                cout << v.front() << endl;
                v.pop_front();
            }
            else {
                cout << v.back() << endl;
                v.pop_back();
            }
        }
        else if(s == "reverse"){
            isreversed = !isreversed;
        }
        else if(s == "push_back"){
            int x ; cin >> x;
            if(!isreversed) v.push_back(x);
            else v.push_front(x);
        }
        
        else if(s == "toFront"){
            int x ; cin >> x;
            if(isreversed) v.push_back(x);
            else v.push_front(x);
        }

    }
    
    
}