#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#define ll long long
#define N 200005 
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}
bool nguyenam(char c){
	return c == 'a' || c == 'e' || c == 'u' || c == 'i' || c == 'o';
}
void solve(){
	
	char a[N];
	scanf ("%s" ,a);
	int n = strlen (a);
	
		
	ll ans = 0;
	ll cntV = 0;
	ll cntC = 0;
	
	for (int i = 0; a[i] != '\0' ; i++){
		if (nguyenam(a[i])){
			ans += cntC; //tao cap voi 1 phu am duong truoc no
			cntV++;
		}
		
		
		else {
			ans +=  cntV;
			cntC++;
		}
		
	}
	
	printf("%lld", ans);
	
	
	
	
	
	
	
	

}
void output(){
	
}
int main(){
	
	clock_t start = clock();
	
	
	
	
	
	//	freopen("CAU5.INP", "r", stdin);
	//  freopen("CAU5.OUT", "w", stdout);
    
	
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
