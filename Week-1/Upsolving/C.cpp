#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(0),cin.tie(0),cout.tie(0);
#define ll long long
using namespace std;

struct student{
    int a , b ;
};

struct check{
    int c , d ;
};

student s[50];
check h[50];


int main(){
    int n , m ;
    cin >> n >> m ;
    for(int i = 0 ; i  < n ; i++){
        cin >> s[i].a >> s[i].b ;
    }
    for(int j = 0 ; j  < m ; j++){
        cin >> h[j].c >> h[j].d ;
    }
    for(int i = 0 ; i  < n ; i++){
        int idx = 1 ;
        int mn = abs(s[i].a - h[0].c) + abs(s[i].b - h[0].d) ;
        for(int j = 1 ; j  < m ; j++){
            int dis = abs(s[i].a - h[j].c) + abs(s[i].b - h[j].d) ;
            if(dis < mn){
                mn = dis ;
                idx = j + 1 ;
            }
        }
        cout << idx << endl ;
    }

    return 0 ;
}
