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
long long a[N];
void solve(){
    //qsort(a, x, sizeof(int), sort);
  	
	
	long long n;
	scanf("%lld", &n);
	
	long long total = 0;
	while(n > 0){
		long long low = 0;
		long long high = 2000000000LL;
		long long answer = 0;
		while(low <= high){
			long long mid = low + (high - low)/2;
			
			if ((unsigned long long) mid * (mid + 1)/2 <=(unsigned long long)n){
				answer = mid;
				low = mid + 1;
			}
			else{
				high = mid - 1;
			}
		}
		long long odd = (answer + 1) /2;
		total += odd * odd;
	
		unsigned long long sold_today = (unsigned long long) answer * (answer + 1) / 2;
    	n -= sold_today;
	}
	printf ("%lld\n", total);
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
