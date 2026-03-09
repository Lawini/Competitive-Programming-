#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define N 100005
void solve(){
	//abs p[i]-p[i+1] = i => p[n - 1] - p[n] = n - 1 => p[n - 1] = n and p[n] = 1
						
	int n;
	scanf("%d", &n);

	int left = 1;
	int right = n;
	int a[N];
	for (int i = n; i >= 1; i--){
		if ((n - i) % 2 == 0){
		a[i] = left;
		left++;
		}
		else {
		a[i] = right;
		right--;
		}
	}
	for (int i  = 1; i <= n; i++){
		printf("%d ", a[i]);
	}
	printf("\n");


}
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
}
