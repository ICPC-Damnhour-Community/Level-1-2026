#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main(){
    fast
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        map <int,int> mp;
        for(int  i = 0 ; i < n ; i++){
            int x ; cin >> x ;
            mp[x]++;
        }
        vector <int> vec;
        for(auto i : mp){
            vec.push_back(i.second);
        }
        sort(vec.begin() , vec.end());
        int ans = INT_MAX ;
        for(int i = 0; i < mp.size() ;i++ ){
            int val = mp.size() - i ;
            ans = min(ans , n - (vec[i] * val));
        }
        cout << ans << endl;
    }
    return 0;
}