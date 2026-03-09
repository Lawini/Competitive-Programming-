#include<stdio.h>
#include<stdbool.h>
#define N 1000000
bool prime[N+1];
void sieve(){
	for (int i=0;i<N;i++){
		prime[i]=true;
	}
	prime[0]=false;
	prime[1]=false;
	
	for (int j=2;j*j<=N;j++){
		if (prime[j]==true){
		for (int i=j*j;i<N;i+=j){
			prime[i]=false;
			}
		}
	}
}
void result(){
	sieve();
	int L; scanf("%d",&L);
	int R; scanf("%d",&R);
		
		for (int i=L;i<=R;i++){
			if (prime[i]==true){
			printf("%d ",i);
		}
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	
	while(t--){
		result();
	}
	
	
	
}
