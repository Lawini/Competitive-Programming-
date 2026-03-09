#include <stdio.h>
#include <limits.h>
#define N 100005

void solve(){
	int n,s,x;
	scanf("%d%d%d", &n, &s, &x);
	
	int a[N];
	int  sum = 0;
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		sum += a[i];
	}
	if (s - sum >= 0){
		if (sum == s){
		printf("YES\n");
		}
	else {
		if ((s - sum) % x == 0){
			printf("YES\n");
		}
		else printf("NO\n");
		}
	}
	else printf("NO\n");
	
	
	
}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
}
