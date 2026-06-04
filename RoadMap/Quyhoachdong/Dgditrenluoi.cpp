#include<bits/stdc++.h>
using namespace std;

#define maxn 102
#define maxa 1005
const int MOD = 1e9 + 7;

int dp[maxa][maxa];
char a[maxa][maxa];
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    for (int i = 1; i <= n; i++){
       for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

    dp[1][1] = 1;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[1][1] == '*'){
                cout << 0 << endl;
                return 0;
            }
            if (a[i][j] == '*') continue;
            else dp[i][j] += (dp[i - 1][j] + dp[i][j - 1]) % MOD;
        }
    }
    cout << dp[n][n] << endl;
}
