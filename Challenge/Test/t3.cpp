#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#define ll long long
#define N 1000005
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

bool prime[N];
void sieve(){
	for (long long i = 0; i < N; i++){
		prime[i] = true;
	}
	
	prime[0] = prime[1] = false;
	for (long long i = 2; i < N; i++){
		for (long long j = i * i; j < N; j += i){
			prime[j] = false;
		}
	}
	
}

void solve(){



	int n;
	scanf ("%d", &n);
	
	long long a[n];

	for (int i = 0; i < n; i++){
		scanf ("%lld", &a[i]);
	}	
	
	for (int i = 0; i < n; i++){
		long long t = sqrt(a[i]);
		if (t * t == a[i] && prime[t] == true ){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	
	
	

    //two pointer
    // 	while (L < R){
	// 	if (a[L] + a[R] == k){
	// 		count++;
	// 		L++;
	// 		R--;
	// 	}
	// 	else if (a[L] + a[R] < k){
	// 		L++;
	// 	}
	// 	else {
	// 		R--;
	// 	}
	// }
	
    //qsort(a, x, sizeof(int), sort);
}
void output(){
	
}
int main(){
	
	clock_t start = clock();
	
	
	
	
	
	//	freopen("CAU5.INP", "r", stdin);
	//  freopen("CAU5.OUT", "w", stdout);
    
	
	//Coding
	sieve();
	int t = 1;
    //scanf("%d",t);
    while(t--){
    solve();
    }
    
    
    
    
    
    
    
    
    
    
    
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "\nTime: %.3f seconds\n", time_taken);
}
