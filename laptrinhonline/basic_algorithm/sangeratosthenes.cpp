#include<stdio.h>
#include<stdbool.h>
#include<time.h>
#define N 100000000
bool primeN[N+1];
void sieve(){
	
	for (int i=0;i<=N;i++){
		primeN[i]=true;
	}
	primeN[0]=false;
	primeN[1]=false;
	for (int j=2;j*j<=N;j++){
		if (primeN[j]==true){
			for (int i=j*j;i<=N;i+=j){
				primeN[i]=false;
			}
		}
	}
}

void solve(){	
	int L,R;
	scanf("%d",&L);
	scanf("%d",&R);
	
	int count=0;
	for (int i=L;i<=R;i++){
		if (primeN[i])
		count++;
	}
	
	printf("%d",count);
	printf("\n");

}
int main(){
	clock_t start = clock();
	
	sieve();
	
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
	
	
	
	double time_taken = (double)(clock() - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "Time: %.5f sec\n", time_taken); 
    
    return 0;
}
