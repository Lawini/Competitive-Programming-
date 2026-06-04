#include<bits/stdc++.h>
using namespace std;

#define maxn 102
#define maxa 1000006
const int MOD = 1e9 + 7;

int dp[maxa], S;
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n >> S;
    int a[maxn];

    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    //Giong bai tung xuc xac nhung lan nay xuc xac chi co n mat van lam y het
    dp[0] = 1;
    for (int i = 1; i <= n; i++){
        for (int s = 1; s <= S; s++){
            if (s >= a[i]){
                dp[s] = (dp[s] + dp[s - a[i]]) % MOD;
            }
        }
    }

    cout << dp[S] << endl;
    return 0;


}
