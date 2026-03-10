#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
struct dragon{
    int str , bon ;
};

bool comp(dragon a , dragon b){
    return a.str < b.str ;
}
int main(){
    int s , n ;
    cin >> s >> n ;
    dragon d[1000];
    for(int i = 0 ; i  < n ; i++){
        cin >> d[i].str >> d[i].bon;
    }
    sort(d , d + n , comp) ;
    for(int i = 0 ; i  < n ; i++){
        if(s <= d[i].str){
            cout << "NO";
            return 0 ;
        }
        s += d[i].bon ;
    }
    cout << "YES" ;
    return 0 ;
}