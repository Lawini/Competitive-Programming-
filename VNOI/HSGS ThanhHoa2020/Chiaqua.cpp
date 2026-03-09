#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#define ll long long
#define N 200005 


long long a[N];
long long pre[N]; 


long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

long long gcd (long long a, long long b){
	if (b == 0) return a;
	return gcd(b, a % b);
}
//long long lcm (long long a, long long b){
//	if (b == 0 || a == 0 ) return 0;
//	return (a / gcd (a, b)) * b;
//}



void solve(){
	ll x, y;
	scanf("%lld %lld",&x, &y);
	
	
	long long g = gcd(x, y);
	
	//dem so uoc
	int count = 0;
	for (long long i = 1; i * i <= g; i++){
		if (g % i == 0){
			if (i * i == g){
			count++; //cong 1 neu la so chinh phuong vd 6 * 6 
			}
			else {
			count += 2; // vd neu 6 * 2 
			}
		}
	}
	printf("%d\n", count);
	
	
	
	
    
}
void output(){
	
}
int main(){
	
	
	
//	freopen("CAU1.INP", "r", stdin);
//	freopen("CAU1.OUT", "w", stdout);
	
	clock_t start = clock();
	
	
	
	

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
