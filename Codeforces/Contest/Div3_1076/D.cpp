#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define N 200005
#define ll long long 

ll a[N];
ll b[N];
int cmp_asc(const void *a, const void *b){
	long long valA = *(const long long*)a;
    long long valB = *(const long long*)b;
    if (valA > valB) return 1;
    if (valA < valB) return -1;
    return 0;
}
ll max_val(ll a, ll b){
	return a > b ? a : b;
}

void shuffle(long long *array, int n) {
    for (int i = 0; i < n; i++) {
        int r = rand() % n;
        long long temp = array[i];
        array[i] = array[r];
        array[r] = temp;
    }
}

void solve(){
	
	int n;
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
		scanf("%lld", &a[i]);
	}
	
	ll sum = 0;
	for (int i = 0; i < n; i++){
		scanf("%lld", &b[i]);
	}
	
	for (int i = 1; i < n; i++){
		b[i] += b[i - 1];
	}
	
	shuffle(a, n);
	qsort(a, n, sizeof(long long), cmp_asc);
	

	
	int j = n - 1; // level
	ll ans = 0;
	
	
	for (int i = 0; i < n; i++){
		ll cnt = n - i;
	
	
	while (j >= 0 && b[j] > cnt){
		j--;
	}

	if (j >= 0){
		ll cur = a[i] * (j + 1); 
		ans = max_val(ans, cur);	
	}
	
	}
	
	printf ("%lld\n", ans);
	
	
	
	
}
int main(){
	srand(0);
	int t;
	scanf("%d", &t);
	while (t--){
		solve();
	}
}
