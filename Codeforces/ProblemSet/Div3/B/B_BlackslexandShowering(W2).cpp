#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define N 1000005
long long a[N];
long long pre[N];
long long minimize(long long a, long long b){
	return (a < b) ? a : b; 
}
void solve(){
	int n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	
	// vd 10 20 25 40
	pre[0]=0;
	for (int i = 1; i < n; i++){
		pre[i+1] = pre[i] + llabs (a[i] - a[i-1]);
	}	
	//pre [0] = 0 
	//pre[1] = 1
	//pre[2] = 10
	//pre[3] = 10 + 5 = 15 
	long long ans=LLONG_MAX, suf = 0;
 	for (int i =  n - 1; i >= 0; i--){
 		long long bridge = 0;
 		if (i > 0 && i < n - 1){
 			bridge=llabs (a[i - 1] - a[i + 1]);
		}
		
 		ans = minimize(ans, pre[i] + suf + bridge);
 		//ans= dau + duoi + cau noi
 		if (i + 1 < n){
 			suf += llabs (a[i] - a[i+1]);
		}
	}
	printf("%lld\n",ans);
	
	
	
}


int main(){
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
	
	
	
}

