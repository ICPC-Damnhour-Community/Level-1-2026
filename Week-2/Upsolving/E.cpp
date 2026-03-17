#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

int main(){
    int n ; cin >> n ;
    vector <int> v(n);
    for(int i = 0 ; i < n ; i++){
        cin >> v[i];
    }
    vector <int> neg , pos , zero;
    for(int i = 0 ; i < n ; i++){
        if(v[i] > 0) pos.push_back(v[i]);
        else if (v[i] < 0) neg.push_back(v[i]);
        else zero.push_back(v[i]);
    }
    if(pos.size() == 0){
        pos.push_back(neg.back());
        neg.pop_back();
        pos.push_back(neg.back());
        neg.pop_back();
    }
    if(neg.size() % 2 == 0){
        zero.push_back(neg.back());
        neg.pop_back();
    }
    cout << neg.size() << " ";
    for(int i : neg) cout << i << " ";
    cout << endl << pos.size() << " ";
    for(int i : pos) cout << i << " ";
    cout << endl << zero.size() << " ";
    for(int i : zero) cout << i << " ";
    return 0 ;
}