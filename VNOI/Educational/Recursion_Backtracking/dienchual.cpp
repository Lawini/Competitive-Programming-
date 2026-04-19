#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define ALL(x) x.begin(), x.end()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)
//CODE
int n, m;
int check[16][16] = {0};
bool Try(){
    int count = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        if (check[i][j] == 0){
            return false;
            }        
        }     
    }
    cout << "YES" << endl;
    cout << "Time elapsed: " << TIME << endl;
    exit(0);
}
void back(){

    Try();
    int opt_cnt = 0;
    for(int i = 0; i + 1 < n; i++){
        for (int j = 0; j + 1 < m; j++){
            opt_cnt += 2;
            //Ham kiem tra xem co bug khong
            assert(opt_cnt <= 18);
            
            if (check[i][j] != 1 && check[i + 1][j] != 1 && check[i + 1][j + 1] != 1 && j + 1 < m){
                //Dat L phai
                check[i][j] = check[i + 1][j] = check[i + 1][j + 1] = 1;
                back();
                check[i][j] = check[i + 1][j] = check[i + 1][j + 1] = 0;
            }
            if (check[i][j] != 1 && check[i + 1][j] != 1 && check[i + 1][j - 1] != 1 && j - 1 >= 0){
                //Dat L trai
                check[i][j] = check[i + 1][j] = check[i + 1][j - 1] = 1;
                back(); 
                check[i][j] = check[i + 1][j] = check[i + 1][j - 1] = 0;
            }
        }
    }
}
void solve(){
    cin >> n >> m;


    int dots = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
        char s;
        cin >> s;
        if (s == '.') dots++;
        else check[i][j] = 1;
            
        }
    }


    if (dots % 3 != 0) {
    cout << "NO" << endl;
    return;
    }

    back();
    cout << "NO" << endl;
    
}


//C2
// int N, M;
// char grid[20][20];
// void back(int x, int y){
//     if (x > N){
//         cout << "YES" << endl;
//         exit(0);
//     }

//     int nxt_r = x; int nxt_c = y + 1;

//     if (nxt_c > M) {
//         nxt_r = x + 1;
//         nxt_c = 1;
//     }

//     if (grid[x][y] == '#'){
//         back(nxt_r, nxt_c);
//         return;
//     }
//     else{
//     if (x < N && y < M && grid[x + 1][y] == '.' && grid[x + 1][y + 1] == '.') {
        
//         grid[x][y] = grid[x + 1][y] =  grid[x + 1][y + 1] = '#';
//         back(nxt_r , nxt_c);
//         grid[x][y] = grid[x + 1][y] =  grid[x + 1][y + 1] = '.';
//     }
//     if (x  < N && y > 1 && grid[x  + 1][y - 1] == '.' && grid[x  + 1][y] == '.') {
        
//         grid[x][y] = grid[x + 1][y - 1] = grid[x + 1][y] = '#';
//         back(nxt_r, nxt_c);
//         grid[x][y] = grid[x + 1][y - 1] = grid[x + 1][y] = '.';
//        }
//     }
// }
// void solve(){
//     cin >> N >> M;
//     for (int i = 1; i <= N; i++){
//         for (int j = 1; j <= M; j++){
//             cin >> grid[i][j];
//         }
//     }

//     back(1, 1);
//     cout << "NO" << endl;
// }
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}