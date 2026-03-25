#include <bits/stdc++.h>
using namespace std;

int max_val(int a, int b){
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
void solve(){
    int n, m;
    cin >> n >> m;

    int limit[100], be[100];

    int len, speed, pos = 0;
    for (int i = 0; i < n; i++){

        cin >> len >> speed;

        for (int j = pos; j < pos + len; j++){
            //luu chi so mang (giong danh dau mang)
            limit[j] = speed;
        }
        pos += len;
    }

    pos = 0;
    for (int i = 0; i < m; i++){
        cin >> len >> speed;

        for (int j = pos; j < pos + len; j++){
            be[j] = speed;
        }
        pos += len;
    }

    int max_over = 0;

    for (int i = 0; i < 100; i++){
        max_over = max_val(max_over, be[i] - limit[i]);
    }

    cout << max_over << endl;


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
