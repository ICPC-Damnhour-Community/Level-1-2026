#include <bits/stdc++.h>
using namespace std;

// void pre() {
// #ifndef ONLINE_JUDGE
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
// }

void queuueee(){

    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    
} 


int main(){
    // pre();
    // queuueee();

    int n , d ; cin >> n >> d;
    queue<int> q;
    // 1 2 3 4 5
    for(int i = 0 ; i<n ;i++){
        int x ; cin >> x;
        q.push(x);
    }
    for(int i = 0; i<d ;i++){
        q.push(q.front());
        q.pop();
    }
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}