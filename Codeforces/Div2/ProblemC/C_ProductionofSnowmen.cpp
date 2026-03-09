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



	int count_valid (int n, int x[], int y[]){
		int valid_count = 0;
		for (int s = 0; s < n; s++){
			int is_valid = 1;
			for (int i = 0; i < n; i++){
				if (x[i] >= y[(s + i) % n]){
					is_valid = 0; // false dk a < b;
					break;
				}
			}
			
			if (is_valid){
			valid_count++;
			}
		}
		return valid_count;
	}
	
void solve(){
	int n;
	scanf("%d",&n);
	
	int a[n], b[n], c[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
		for (int i = 0; i < n; i++) scanf("%d", &b[i]);
			for (int i = 0; i < n; i++) scanf("%d", &c[i]);
	
	int countAB = count_valid (n, a, b);
	int countBC = count_valid (n, b, c);
	
	ll ans = (ll)countAB * countBC * n;
	printf("%lld\n",ans);
}

int main (){
	
	
	int t;
	scanf ("%d",&t);
	
	while (t--){
		solve();
	}
	
	
	
}
