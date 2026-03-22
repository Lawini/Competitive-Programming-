#include<stdio.h>
int minimize(int a, int b){
	return a < b ? a : b;
}
void solve(){
	int n, m;
	scanf("%d%d", &n, &m);
	
	int c = minimize (m, n);
	printf("%d\n", &c);

	
}
int main(){
	int t = 1;
//	scanf("%d", &t);
	while (t--){
		solve();
	}
	
}
