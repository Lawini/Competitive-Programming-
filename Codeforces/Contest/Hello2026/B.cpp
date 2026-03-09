#include <stdio.h>
#define N 2000005


int mark[N];
void solve(){
	int n, k;
	scanf("%d%d", &n, &k);
	
	
	for (int i = 0; i <= n; i++){
		mark[i] = 0;
	}
	
	for (int i = 0; i < n; i++){
		int x;
		scanf("%d", &x);
		
		if (x < N){
			mark[x] = 1;
		}
	}
	
	
	int ans = 0;
	for (int i = 0; i <=n ; i++){
		if (mark[i] == 0 || i == (k - 1)){
			ans = i;
			break;
		}
	}
	printf("%d\n", ans);
	
	
	
}

int main() {
	int t;
	scanf ("%d", &t);
	while (t--){
		solve();
	}
	
	
}
