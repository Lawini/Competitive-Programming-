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
int check[20];
int a[20];
void back(int k){
    if (k > n){
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        return;
    }

    for (int i = 0; i <= 2; i++){
        if (check[i] != n / 3){
            a[k] = i;
            check[i]++;
            back(k + 1);
            check[i]--;
        }
    }

}
void solve(){
    cin >> n;
    if (n % 3 != 0) {
    cout << "-1";
    return;
    }
    back(1);
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