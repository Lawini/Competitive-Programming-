#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#define ll long long
#define N 1000005
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
int gcd (int a, int b){
	if (b == 0) return a;
	return (gcd (b, a%b));
}


int prime[N];
int sieve (){
	for (int i = 0; i < n; i++){
		prime[N] = 1;
	}
	prime[0] = prime [1] = 0;
	
	for (int i = 2; i * i < N; i++){
		if (prime[i]){
			for (int j = i * i; j <= N; j += i){
				prime[i] = 0;
			}
		}
	}
	
}

void solve(){
	sieve ();
	
	int n;
	scanf("%d", &n);
	
	ll a[N];
	for (int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	
	ll t;
	scanf("%lld", &t);
	
	while (t--){
		ll l, r;
		scanf ("%lld%lld", &l, &r);
		
		int cnt = 0;
		for (int i = l, i <= r; i++){
			if (prime[a[i]] == 1 && prime[a[i] + ]){
				cnt++;
			}
		}
		
		
		
		printf("%d\n",cnt);
	}
	
	
	
	
	
	




}
void output(){
	
}
int main(){
	
	clock_t start = clock();
	
	
	
	
	
	//	freopen("COMPRIME.INP", "r", stdin);
	//  freopen("COMPRIME.OUT", "w", stdout);
    
	
	//Coding
	int t = 1;
    //scanf("%d",t);
    while(t--){
    solve();
    }
    
    
    
    
    
    
    
    
    
    
    
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "\nTime: %.3f seconds\n", time_taken);
}
