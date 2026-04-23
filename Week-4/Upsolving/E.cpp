#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main(){
    fast
    int t ; cin >> t ;
    while(t--){    
        int n ; cin >> n;
        map <pair<int,int>,int> mp1;
        map <pair<int,int>,int> mp2;
        map <pair<int,int>,int> mp3;
        map <vector<int>,int> mp;
        vector <int> vec(n);
        for(int  i = 0 ; i < n ; i++){
            cin >> vec[i];
        }
        ll ans = 0 ;
        for(int i = 0 ; i < n - 2 ;i++){
            int a = mp1[{vec[i],vec[i+1]}];
            int b = mp2[{vec[i],vec[i+2]}];
            int c = mp3[{vec[i+1],vec[i+2]}];
            int d = mp[{vec[i],vec[i+1],vec[i+2]}];
            ans += a + b + c - (d * 3);
            mp1[{vec[i],vec[i+1]}]++;
            mp2[{vec[i],vec[i+2]}]++;
            mp3[{vec[i+1],vec[i+2]}]++;
            mp[{vec[i],vec[i+1],vec[i+2]}]++;
        }
        cout << ans << endl;
    }
    return 0;
}