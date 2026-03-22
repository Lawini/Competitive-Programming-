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
void solve(){
	int n;
	scanf("%d",&n);
	
    int maxt[N];
    for (int i = 0; i < N; i++){
    	maxt [i] = -1;
	}
	
	int s,e;
	for (int i = 0; i < n; i++){
	
		scanf ("%d%d",&s ,&e);
		
		if (s > maxt[e]){
			maxt[e] = s;
		}
	}
	
	
	int count = 0;
	int time = -1;
	
	for (int i = 0; i < 100; i++){
		if (maxt [i] != -1){
			if (maxt [i] > time ){
				count++;
				time = maxt[i];
			}
		}
	}
	
	printf("%d\n",count);
	
	

    //qsort(a, x, sizeof(int), sort);
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
