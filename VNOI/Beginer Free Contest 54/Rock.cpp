#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define N 100005
#define ll long long
#define fi first
#define se second

int n, k;
ll a[N];
void solve(){

    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];

    sort(a, a + n);

    ll sum = 0;
    int m = n / k;

    //for (int i = 0; i < n; i++) cout << a[i] << " ";
    for (int i = 0; i < n; i += m){
        //cout << a[i + m - 1] << " " << a[i] << endl;
        sum += a[i + m - 1] - a[i];
    }

    cout << sum << endl;
}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}

