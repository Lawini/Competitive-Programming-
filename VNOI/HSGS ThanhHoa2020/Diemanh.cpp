#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#define ll long long
#define N 1000005 


int a[N];
long long pre[N]; 
int count[N];

int max_val (int a, int b){
	return a > b ? a : b;
}

void solve(){
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		scanf("%d", &a[i]);
	}
	
	for (int i = 1; i <= n ; i++){
		count[i] = 0;
	}
	
	int maximize = INT_MIN;
	for (int i = 1; i <= n ; i++){
		count[a[i]]++;
		maximize = max_val (count[a[i]], maximize);
	}
	
	
	printf("%d\n",maximize);
	
	
	
	
	

}
void output(){
	
}
int main(){
	
	clock_t start = clock();
	
	
	
	
	
//		freopen("CAU2.INP", "r", stdin);
//	  	freopen("CAU2.OUT", "w", stdout);

	
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
