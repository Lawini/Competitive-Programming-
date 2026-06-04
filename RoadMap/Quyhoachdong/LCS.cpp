#include<bits/stdc++.h>
using namespace std;

#define MAXN 1000

int dp[MAXN][MAXN]; //do dai xau con chung dai nhat neu ta chi xet i ky tu cua xau A va j ky tu cua xau B
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    string A, B;
    cin >> A >> B;

    int m = A.length();
    int n = B.length();


    A = " " + A;
    B = " " + B;

    for (int i = 1; i <= m; i++){
        for(int j = 1; j <= n; j++){
            if(A[i] == B[j]){
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else{
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[m][n] << endl;
}
