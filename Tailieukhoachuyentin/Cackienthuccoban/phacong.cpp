#include<bits/stdc++.h>
using namespace std;
int n;
int c[20][20];
long long cur_s = 0, min_s = 1e18;
bool check[20];
int cmin[20];
void solve(int i){
    long long future_s = 0;
    for(int k = i; k <= n; k++){
        future_s = cmin[k];
    }
    if (cur_s + future_s >= min_s){
        return;
    }
    if (cur_s >= min_s){
        return;
    }
    if(i > n) return;

    for (int j = 1; j <= n; j++){
        if (!check[j]){
            check[j] = true;
            cur_s += c[i][j];


        if (i == n){
            if (cur_s < min_s){
                min_s = cur_s;
            }
        }
        else {
            solve(i + 1);
        }

        check[j] = false;
        cur_s -= c[i][j];
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n;
    for(int i = 1; i <= n; i++){
            cmin[20] = 1e9;
        for(int j = 1; j <= n; j++){
            cin >> c[i][j];
            if (c[i][j] < cmin[i]){
                cmin[i] = c[i][j];
            }
        }
    }
    solve(1);
    cout << min_s << endl;



}
