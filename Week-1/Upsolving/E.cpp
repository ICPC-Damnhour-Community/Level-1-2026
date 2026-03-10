#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
struct point{
    ll a , b ;
};

bool comp(point x , point y){
    return x.a < y.a ;
}
int main(){
    ll n , k ;
    cin >> n >> k ;
    point arr[100005];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i].a >> arr[i].b ;
    }
    sort(arr , arr + n , comp);
    ll sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += arr[i].b ;
        if(sum >= k){
            cout <<arr[i].a ;
            break;
        }
    }
    return 0 ;
}
