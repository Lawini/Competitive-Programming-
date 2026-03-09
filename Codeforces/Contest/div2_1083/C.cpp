#include<stdio.h>
#define N 300005
void solve(){
	int n;
	scanf("%d", &n);
	
	int a[N];
	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	
	int count = 0;
	for (int i = 2; i <= n; i++){
		if (a[i] == a[i - 1] || a[i] == 7 - a[i - 1]){
			int k =  7 - a[i - 1] + 1;
			if (k == a[i + 1] && k < 6){
				a[i] = k + 1;
			}
			else if (k == a[i + 1] && k == 6){
				a[i] = k - 1;
			}
			else {
				a[i] = k;
			}
			count++;
		}
	}

	printf("%d\n", count);
		
	
}
int main(){
	int t;
	scanf("%d", &t);
	
	while(t--){
		solve();
	}	
	
}
