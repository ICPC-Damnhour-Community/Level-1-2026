#include <bits/stdc++.h>

using namespace std;
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL)
#define T int T; cin >> T; while(T--)
#define fr for(int i = 0 ; i < s.size() ; ++i)
#define ll long long
#define endl '\n'
int main() {
    fast ;
    vector <int> v ;
    for(int i = 1 ; i < 1670 ; i++){
        if(i % 3 != 0 && i % 10 != 3){
            v.push_back(i);
        }
    }
    int t;
    cin >> t;
    while (t--) {
        int k ;
        cin >> k ;
        cout << v[k - 1] << endl;
    }
    return 0;
}