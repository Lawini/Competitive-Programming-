#include<stdio.h>
#include <string.h>
#define N 1000005
int minimize (int a, int b){
	return a < b ? a : b;
}
int maximize (int a, int b){
	return a > b ? a : b;
}
void solve(){
	int n;
	scanf("%d", &n);
	
	int a[n + 1];
	for (int i = 1; i <=n ;i++){
		scanf("%d" ,&a[i]);
	}
	
	if (a[1] == 1 || a[n] == 1){
		printf("Alice\n");
	}
	else printf("Bob\n");
}
	
	
int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
	
	
	
}
