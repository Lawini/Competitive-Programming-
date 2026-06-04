#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define ALL(x) x.begin(), x.end()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)



//CODE
int n;
ll a[25]; 
int used[25];
ll total = 0;
ll ans = INT_MAX;
void back(int k, ll cur_1){

    if (k > n){
        ll cur_2 = total - cur_1;
        ans = min(ans, abs(cur_1 - cur_2));
        return;
    }

    back(k + 1, cur_1 + a[k]);
    back(k + 1, cur_1);
}
void solve(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        total += a[i];
    }
    back(1, 0);
    cout << ans << endl;
}   
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}