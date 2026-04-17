#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long
using namespace std;

int main() {
    int n ; cin >> n ;
    vector <int> v ;
    for(int i = 0 ; i < n ; i++){
        int x ; cin >> x ;
        v.push_back(x);
    }
    sort(v.begin() , v.end());
    for(int i = 0 ; i < n ; i++){
        cout << v[i] << " ";
    }
    return 0;
}