
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
int n;
ll h[20];
ll w[20][20];
ll ans = 1e18;
ll res[20];
ll s[20];
void back(int k){
    //k la trang thai luc dau 
    if (k == n + 1){
        ll cur = 0;
        for(int i = 1; i <= n; ++i) cur += h[i] * s[i];
        for(int i = 1; i <= n; ++i){
            for(int j = i + 1; j <= n; ++j){
                cur += w[i][j] * s[i] * s[j];
            }
        }
        ans = min(ans, cur);

        return;
    }

    
    back(k + 1);
    s[k] *= -1;
    back(k + 1);

}
void solve(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> h[i];
        s[i] = 1;
    }
    for (int i = 1; i < n; i++){
        for (int j = i + 1; j <= n; j++){
            cin >> w[i][j];
        }
    }
    back(1);
    cout << ans << endl;
}
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