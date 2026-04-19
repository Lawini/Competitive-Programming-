#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll recursion(ll a, ll n){
    if (n == 1) return a;
    if (n == 0) return 1;

    ll tmp = recursion(a, n / 2);

    if (n % 2 == 0){
        return tmp * tmp;
    }
    else {
        return tmp * tmp * a;
    }
}
void solve(){
    ll a, n;
    cin >> a >> n;

    cout << recursion(a, n) << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while(t--){
        solve();
    }
}
