#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(0);
#define all(v) (v).begin(), (v).end()
#define endl "\n"
#define int long long
const int OO = static_cast<int>(1e17);
const int N = 40 + 5, M = N, MOD = 1e9 + 7;
int dx[] = {1, -1, 0, 0, 0, 0};
int dy[] = {0, 0, 1, -1, 0, 0};
int dz[] = {0, 0, 0, 0, 1, -1};

void pre() {
    fast
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
struct TEAM {
    string name;
    int points = 0 , games = 0 , scored = 0 , against = 0 , gd = 0 , wins = 0 , draws = 0 , loses = 0;
    void print() {
        cout << this->name << " "
            << this->points << "p, "
            << this->games << "g ("
            << this->wins << "-"
            << this->draws << "-"
            << this->loses << "), "
            << this->gd << "gd ("
            << this->scored <<"-"
            << this->against <<")\n";
    }
};
void solve() {
    string tournament;
    getline(cin , tournament);
    int teamsNum; cin >> teamsNum;
    cin.ignore();
    TEAM teams[teamsNum];
    for (auto &t : teams) {
        getline(cin , t.name);
    }
    int matchNum; cin >> matchNum;
    cin.ignore();
    for (int i = 0 ; i < matchNum ; i++) {
        string team1 , team2 , team1g , team2g;
        getline(cin , team1 , '#');
        getline(cin ,team1g ,'@');
        getline(cin ,team2g ,'#');
        getline(cin ,team2);
        int idx1 = 0 , idx2 = 0;
        for (int j = 0 ; j<teamsNum ; j++) {
            if (teams[j].name == team1) idx1 = j;
            if (teams[j].name == team2) idx2 = j;
        }
        int goals1 = stoi(team1g);
        int goals2 = stoi(team2g);

        if (goals1 > goals2) teams[idx1].points += 3;
        if (goals1 == goals2) teams[idx1].points += 1;
        if (goals1 < goals2) teams[idx1].points += 0;
        teams[idx1].games++;
        teams[idx1].scored += goals1;
        teams[idx1].against += goals2;
        teams[idx1].wins += (goals1 > goals2);
        teams[idx1].draws += (goals1 == goals2);
        teams[idx1].loses += (goals1 < goals2);

        if (goals1 < goals2) teams[idx2].points += 3;
        if (goals1 == goals2) teams[idx2].points += 1;
        if (goals1 > goals2) teams[idx2].points += 0;
        teams[idx2].games++;
        teams[idx2].scored += goals2;
        teams[idx2].against += goals1;
        teams[idx2].wins += (goals1 < goals2);
        teams[idx2].draws += (goals1 == goals2);
        teams[idx2].loses += (goals1 > goals2);
    }

    for (auto &t : teams) {
        t.gd = t.scored - t.against;
    }
    //  t1 , t2
    sort(teams , teams+teamsNum , [](TEAM t1 , TEAM t2) {
        if (t1.points != t2.points) {
            return t1.points > t2.points;
        }
        if (t1.wins != t2.wins) {
           return t1.wins > t2.wins;
        }
        if (t1.gd != t2.gd) {
           return t1.gd > t2.gd;
        }
        if (t1.scored != t2.scored) {
           return t1.scored > t2.scored;
        }
        if (t1.games != t2.games) {
           return t1.games < t2.games;
        }
        transform(t1.name.begin() , t1.name.end() , t1.name.begin() , ::tolower);
        transform(t2.name.begin() , t2.name.end() , t2.name.begin() , ::tolower);
        if (t1.name != t2.name) {
           return t1.name < t2.name;
        }
    });
    cout << tournament << endl;
    int i = 1 ;
    for (auto t : teams) {
        cout << i++ << ") ";
        t.print();
    }

}

signed main() {
    pre();
    int t = 1;
    cin >> t;
    cin.ignore();
    // 0
    while (t--) {
        solve();
        if (t) cout << endl;
    }
}
