#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define ll long long
#define N 200005 
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }
int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool check (int h, ll a, ll b){
	ll n_odd = 0;
	ll n_even = 0;
	
	ll cur_layer_size = 1;
	for (int i = 1; i <= h; i++){
		
		
		if (i % 2 !=0){
			n_odd += cur_layer_size;
		}
		else {
			n_even += cur_layer_size;
		}
			cur_layer_size = cur_layer_size * 2;
	}
	int case1 = (n_odd <= a && n_even <= b);
	int case2 = (n_odd <= b && n_even <= a);
	return (case1 || case2);
	
	
	
	
	
}


void solve(){
	ll a, b;
	scanf ("%lld%lld",&a, &b);
	
	int L = 0;
	int R = 60;
	int ans = 1;
	while (L <= R){
		ll mid = L + (R - L)/2;
		if (check (mid, a, b)){
			ans = mid;
			L = mid + 1;
		}
		else {
			R = mid -1; 
		}
	}
	printf("%d\n", ans);

}
int main (){
	
	
	int t;
	scanf ("%d",&t);
	
	while (t--){
		solve();
	}
	
	
	
}
