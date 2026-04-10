#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
int main(){
    int n ; 
    cin >> n ;
    vector <int> v(n);
    queue <int> q ;
    for(int i = 0 ;i < n ; i++){
        cin >> v[i] ;
    }
    sort(v.begin() , v.end());
    for(int i = 0 ;i < n ; i++){
        if(q.empty() || q.front() != v[i]){
            q.push(v[i]);
        }
    }
    if(q.front() == q.back()){
        cout << "NO";
    }
    else{
        q.pop();
        cout << q.front();
    }
    return 0 ;
}
