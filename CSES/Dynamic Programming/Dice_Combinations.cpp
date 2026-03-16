#include<stdio.h>
#include<math.h>
#include<stdbool.h>
#define MOD 1000000007
void solve(){
	int n;
	scanf("%d", &n);
	
	static int dp[1000007];
	
	//Only 0 is 1
	dp[0] = 1;
	
	for (int i = 1; i <= n; i++){
		for (int dice = 1; dice <= 6; dice++){
			if (i - dice >=0){
			dp[i] = (dp[i] + dp[i - dice]) % MOD;
			}
		}
	}
	
	printf("%d\n", dp[n]);

}
int main(){
	int t = 1;
//	scanf("%d", &t);
	while(t--){
		solve();
	}
}
