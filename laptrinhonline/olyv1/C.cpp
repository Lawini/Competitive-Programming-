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
int a[N];
void solve(){
    //qsort(a, x, sizeof(int), sort);
    int n;
    scanf("%d", &n);
    
    long long x;
    scanf("%lld", &x);
    int count = 1;
    for (int i = 0; i < n; i++){
    	scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), sort);
	if (a[0] >= x){
		printf("0\n");
		return;
	}
	for (int  i = 1; i < n; i++){
		int cur_sum = a[i] + a[i - 1];
		if (cur_sum <= x){
			count++;
		}
		
	}
	printf("%d\n", count);
	
	
    
}
void output(){
	
}
int main(){
	
	clock_t start = clock();

	//Coding
	int t = 1;
//    scanf("%d",&t);
    while(t--){
    solve();
    }
    
    
    
    
    
    
    
    
    
    
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "\nTime: %.3f seconds\n", time_taken);
}
