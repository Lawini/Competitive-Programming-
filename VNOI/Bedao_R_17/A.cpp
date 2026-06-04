#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define MAXN 1000006
#define ll long long
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    long long l, r;
    cin >> l >> r;
    vector<int> a;
    ll res;
    ll x = r / l;
    ll ans = 0;


    for (int i = 2; i * i <= x; i++){
        while(x % i == 0){
            ans++;
            x /= i;
        }
    }

    if (x > 1) ans++;

    cout << ans + 1 << endl;
}
