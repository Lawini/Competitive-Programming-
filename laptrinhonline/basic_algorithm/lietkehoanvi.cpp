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
int a[10];
int check[10];
void back(int k){

    if (k > n){
        for (int i = 1; i <= n; i++) cout << a[i];
        cout << endl;
        return;
    }

    for (int i = 1; i <= n; i++){
        if (!check[i]){
            a[k] = i;
            check[i] = true;
            back(k + 1);
            check[i] = false;
        }    
    }
}
void solve(){
    cin >> n;
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