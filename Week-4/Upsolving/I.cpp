#include <bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);
#define  ll long long
using namespace std;

int main() {
   int n , m ; char c ;
   cin >> n >> m >> c ;
   char a[n][m];
   for(int i =0 ; i < n ; i++){
    for(int j = 0 ; j < m  ; j++){
        cin >> a[i][j];
    }
   }
   set <char> st ;
   for(int i = 0 ; i < n ; i++){
    for(int j = 0 ; j < m  ; j++){
        if(a[i][j] == c){
            if(i > 0 && a[i - 1][j] != '.' && a[i - 1][j] != c) st.insert(a[i - 1][j]);
            if(i < n - 1 && a[i + 1][j] != '.' && a[i + 1][j] != c) st.insert(a[i + 1][j]);
            if(j > 0 && a[i][j - 1] != '.' && a[i][j - 1] != c) st.insert(a[i][j - 1]);
            if(j < m - 1 && a[i][j + 1] != '.' && a[i][j + 1] != c) st.insert(a[i][j + 1]);
        }
    }
   }
   cout << st.size() << endl;
   return 0 ; 
}
