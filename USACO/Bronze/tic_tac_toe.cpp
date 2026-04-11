#include <bits/stdc++.h>
#define N 1000005
using namespace std;

int max_val(int a, int b){
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
void check(int solo[], int team[][26], char a, char b, char c){
    if (a == b && b == c){
        solo[a - 'A'] = true;
    }
    else if (a == b || a == c || b == c){
        char x, y;
        if (a == b){
            x = a;
            y = c;
        }
        else if (a == c){
            x = a;
            y = b;
        }
        else if (b == c){
            x = b;
            y = a;
        }
    int u = max_val(x, y);
    int v = min_val(x, y);


     team[v - 'A'][u - 'A'] = true;
    }



}


void solve(){
    int solo[26] = {0};
    int team[26][26] = {0};


    vector<vector<char>> s(3, vector<char>(3));
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            cin >> s[i][j];
        }
    }

    int cnt_1 = 0;
    int cnt_2 = 0;
    /*hang*/for(int i = 0; i < 3; i++) {check(solo, team, s[i][0], s[i][1], s[i][2]);}
    /*cot*/for(int j = 0; j < 3; j++) {check(solo, team, s[0][j], s[1][j], s[2][j]);}

    //dg cheo chinh
    check(solo, team, s[0][0], s[1][1], s[2][2]);
    //dg cheo phu
    check(solo, team, s[2][0], s[1][1], s[0][2]);

    for (int i = 0; i < 26; i++){
            if (solo[i] == true){
                cnt_1++;
            }
    }

    for (int i = 0; i < 26; i++){
        for (int j = 0; j < 26; j++){
            if (team[i][j] == true){
                cnt_2++;
            }
        }
    }
    cout << cnt_1 << endl << cnt_2;


}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


//    freopen("shell.in", "r", stdin);
//    freopen("shell.out", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--){
    solve();
    }



}
