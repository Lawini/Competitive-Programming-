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


void solve(){
	
	char a[N];
	fgets(a, sizeof a, stdin);
	
	for (int i = 0; a[i] != '\0' ; i++){
		if (a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z'){
			printf("%c", a[i]);
		}
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
