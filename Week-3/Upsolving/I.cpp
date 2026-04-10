#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
int main(){
    int n ; cin >> n;
    vector<int> v(n);
    for(int i = 0 ;  i < n ; i++){
        cin >> v[i];
    }
    for(int i = 0 ;  i < n ; i++){
        int mn , mx ;
        if(i == 0){
            mn = abs(v[i] - v[i + 1]);
        }
        else if(i == n - 1){
            mn = abs(v[i] - v[i - 1]);
        }
        else{
            mn = min(abs(v[i] - v[i + 1]) , abs(v[i] - v[i - 1]));
        }
        mx = max(abs(v[i] - v[0]), abs(v[i] - v[n - 1])) ;
        cout << mn << " " << mx << endl;
    }
    return 0 ;
}
