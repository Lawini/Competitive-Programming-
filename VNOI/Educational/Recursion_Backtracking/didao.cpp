#include<bits/stdc++.h>
using namespace std;
int n, k;
long long a[60][60];
bool visited[60];
long long x[60], best[60];
int cnt = 1;
long long cur_s = 0; 
long long min_s = 1e18;
long long cmin = 1e18;
void solve(int i){

    //dung nhanh can 
    if (cur_s + (k - cnt + 1) * cmin >= min_s){
        return;
    }

    
    if (cnt == k){
        if (cur_s + a[i][1] < min_s){
            min_s = cur_s + a[i][1];

            for (int z = 1; z <= k; z++){
                best[z] = x[z];
            }
        }
        return;
    }
    for (int j = 2; j <= n; j++){
        if (!visited[j]){
            x[cnt + 1] = j;
            visited[j] = true;
            cnt++;
            cur_s += a[i][j];

            solve(j);

            cur_s -= a[i][j];
            visited[j] = false;
            cnt--;
        }
    }
}
int main(){
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> a[i][j];

            if (i != j){
                cmin = min(cmin, a[i][j]);
            }
        }
    }

    x[1] = 1;
    visited[1] = true;

    solve(1);

    cout << min_s << endl;
    for (int i = 1; i <= k; i++){
        cout << best[i] << " ";
    }

    return 0;

}
