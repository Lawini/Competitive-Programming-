#include <bits/stdc++.h>
using namespace std;


#define MOD 1000000007
#define MAXN 1000006
#define ll long long
#define ull unsigned long long


void solve(){

    ll n, a, b;
    cin >> n >> a >> b;

    ll sum = 0;
    int rem = n % 3;
    int cnt_gr = n / 3;

    if (3 * a <= b){
        sum += n * a;
    }

    else {

        sum += b * cnt_gr;

        //remain
        sum += ((rem * a) < b ? (rem * a) : b);

    }
    cout << sum << endl;


}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while(t--){
        solve();
    }


}
