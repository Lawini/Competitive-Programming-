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
ll x, y;
void solve(){
    
    cin >> x >> y;
    
    ll res = y / x;
    for (int i = 1; i < res; i++){
        if (y % (i * x) != 0){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;

}   
int main(){
    // freopen("in.txt", "r", stdin);
    // freopen("out.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}