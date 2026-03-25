#include <bits/stdc++.h>
using namespace std;

int max_val(int a, int b){
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
void solve(){
    long long x, y;
    cin >> x >> y;

    long long total_dis = 0;
    long long  cur_pos = x;
    int step = 1;

    while (true){
        long long next_pos = x + step;
        if ((step > 0 && cur_pos <=N y && next_pos >= y) ||(
            step < 0 && cur_pos >= y && next_pos <= y )){
                total_dis += abs(y - cur_pos);
                break;
        }
        else {
            total_dis += abs(next_pos - cur_pos);
            cur_pos =  next_pos;
            step *= -2;
        }

    }

    cout << total_dis << endl;

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
