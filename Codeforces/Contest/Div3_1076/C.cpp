#include <stdio.h>
#include <limits.h>
#define N 200005
int a[N];
int b[N];
int S[N];
int max_val(int a, int b){
	return a > b ? a : b;
}
void solve(){
	int n, q;
	scanf("%d%d", &n, &q);
	
	

	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
		
	}
	for (int i = 1; i <= n; i++){
		scanf("%d", &b[i]);
	
	}
	
	
	
	for (int i = n; i >= 1; i--){
		a[i] = max_val(a[i], b[i]);
		if (i < n){
		a[i] = max_val(a[i], a[i + 1]);
		}
	}
	
	S[1] = a[1];
	for (int i = 2; i <= n; i++){
		S[i] = S[i - 1] + a[i];
	}
	
	while (q--){
		int l,r;
		scanf("%d%d", &l, &r);
			
		int sum = S[r] - S[l-1];
		printf("%d ", sum);
	}
	
	printf("\n");
	
	
}
int main(){

	
//	#ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin);
//   freopen("output.txt", "w", stdout);
//   #endif


	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}



}
