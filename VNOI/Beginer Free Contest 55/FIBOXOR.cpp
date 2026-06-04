#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define N 500005 + 5
#define ll long long
#define fi first
#define se second
#define ull unsigned long long


void solve(){

    ll a, b, n;
    cin >> a >> b >> n;
    

    if (n % 3 == 2){
        cout << (b ^ a) << endl;
        return;
    }
    if(n % 3 == 0){
        cout << a << endl;
        return;
    }
    if(n % 3 == 1){
        cout << b << endl;
        return;
    }


}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}

