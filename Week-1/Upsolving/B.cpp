#include <bits/stdc++.h>
using namespace std;

struct Team {
    string name;
    int pts=0,g=0,w=0,d=0,l=0,sc=0,ag=0;

    int gd() const { return sc-ag; }

    void print() const {
        cout<<name<<" "
            <<pts<<"p, "
            <<g<<"g ("<<w<<"-"<<d<<"-"<<l<<"), "
            <<gd()<<"gd ("<<sc<<"-"<<ag<<")\n";
    }
};

template<typename T>
bool comp(const T &a,const T &b){
    string x=a.name, y=b.name;
    transform(x.begin(),x.end(),x.begin(),::tolower);
    transform(y.begin(),y.end(),y.begin(),::tolower);

    return make_tuple(-a.pts,-a.w,-a.gd(),-a.sc,a.g,x) <
           make_tuple(-b.pts,-b.w,-b.gd(),-b.sc,b.g,y);
}

int findTeam(Team teams[],int n,string name){
    for(int i=0;i<n;i++)
        if(teams[i].name==name) return i;
    return -1;
}

void solve(){
    string tournament;
    getline(cin,tournament);

    int n; cin>>n; cin.ignore();
    Team teams[n];
    for(int i=0;i<n;i++) getline(cin,teams[i].name);

    int m; cin>>m; cin.ignore();
    while(m--){
        string t1,t2,g1,g2;
        getline(cin,t1,'#'); getline(cin,g1,'@');
        getline(cin,g2,'#'); getline(cin,t2);

        int a=stoi(g1), b=stoi(g2);
        int i=findTeam(teams,n,t1), j=findTeam(teams,n,t2);
        Team &A=teams[i], &B=teams[j];

        A.g++; B.g++;
        A.sc+=a; A.ag+=b;
        B.sc+=b; B.ag+=a;

        if(a>b){ A.pts+=3; A.w++; B.l++; }
        else if(a<b){ B.pts+=3; B.w++; A.l++; }
        else{ A.pts++; B.pts++; A.d++; B.d++; }
    }

    sort(teams,teams+n,comp<Team>);

    cout<<tournament<<"\n";
    for(int i=0;i<n;i++){
        cout<<i+1<<") ";
        teams[i].print();
    }
}

int main(){
    int t; cin>>t; cin.ignore();
    while(t--){
        solve();
        if(t) cout<<"\n";
    }
}
