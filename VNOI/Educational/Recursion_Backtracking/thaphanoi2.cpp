#include<bits/stdc++.h>
using namespace std;
#define N 100005
int n;
int pos[N];
vector<pair<int, int>> res;
void backtracking(int x, int row){
    if (x == 0){
        return;
    }
    //s la cai coc ma x dang dung hien tai
    int s = pos[x]; //coc hien tai

    //coc lon nhat dang o coc C 
    if (s == row){
        backtracking(x - 1, row);
    }
    //coc lon nhat khong o coc C
    else {
        // tim coc trung gian mid
        int mid = 6 - s - row;
        // mid chac chan khac s (noi ma cai dia x dang dung) nen chuyen x - 1 dia ve mid se khong anh huong gi

        //dua x - 1 que ve coc mid
        backtracking(x - 1, mid);


        //di chuyen dia x tu S -> row
        res.push_back({s, row});
        pos[x] = row;

        //roi chuyen x - 1 que dua tu mid ve lai row
        backtracking(x - 1, row);
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    string s;
    cin >> s;
    for (int i = 1; i <= n; i++) {
        pos[i] = s[i - 1] - 'A' + 1;
    }

    //dua toan bo dia ve coc 3
    backtracking(n, 3);

    cout << res.size() << endl;
    for(auto p : res){
        char from = p.first + 'A' - 1;
        char to = p.second + 'A' - 1;
        cout << from << to << endl;
    }
    return 0;

}
