#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;
#define endl "\n"

struct tuples{
    ll value;
    ll weight ;
    char type ;
    ll date ;
    string name ;
};
template <typename T>
bool comp(const T &a , const T &b){
    return make_tuple(a.value , a.weight , a.type , a.date , a.name) <
    make_tuple(b.value , b.weight , b.type , b.date , b.name);
}
int main(){
    int n ; cin >> n ;
    tuples arr[n];
    for(int i = 0 ; i < n ;i++){
       cin >> arr[i].value >> arr[i].weight >> arr[i].type >> arr[i].date >> arr[i].name ;
    }
    sort(arr , arr + n , comp<tuples>);
    for(auto &a : arr){
        cout << a.value << " " << a.weight << " " 
        << a.type << " " << a.date << " " << a.name << endl ;
    }
    return 0 ;
}
