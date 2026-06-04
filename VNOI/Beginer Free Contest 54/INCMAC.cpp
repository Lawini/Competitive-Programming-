#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define N 500005 + 5
#define ll long long
#define fi first
#define se second
#define ull unsigned long long
int n;
ll a[N];
ll pref[N] = {0};
void solve(){

    cin >> n;
    if (n > 60){
        cout << "1\n" << endl;
        return;
    }

    int ans = 1e9;

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        pref[i] = pref[i - 1] ^ a[i];
    }


    // i la vach ngan giua phai va trai
    for (int i = 1; i < n; i++){
        for (int L = 1; L <= i; L++){
            for(int R = i + 1; R <= n; R++){

                int left = pref[i] ^ pref[L - 1];
                int right = pref[R] ^ pref[i];

                if(left > right){
                    ans = min(ans, R - L - 1);
                }
            }
        }
    }
    if (ans == 1e9) {
        cout << "-1\n" << endl;
        return;
    }

    cout << ans << endl;
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

