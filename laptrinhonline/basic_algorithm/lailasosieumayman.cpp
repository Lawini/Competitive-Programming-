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
#define N 1e9
//CODE

ll n;
ll ans = 1e18;
void back(ll cur, int c4, int c7){
    if (c4 == c7 && cur >= n){
        ans = min(ans, cur);
        return;
    }
    if (cur > N){
        return;
    }

    back(cur * 10 + 4, c4 + 1, c7);
    back(cur * 10 + 7, c4, c7 + 1);

}
void solve(){
   cin >> n;
   back(0, 0, 0);
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