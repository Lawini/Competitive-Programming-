#include <stdio.h>
#include <math.h>
#include<stdbool.h>
#define N 100
bool P[N+1];
void sieve(){
	for (int i=0;i<=N;i++){
		P[i]=true;
	}
	P[0]=false;
	P[1]=false;
	
	
	for (int j=2;j*j<=N;j++){
		if (P[j]==true){
	for(int i=j*j;i<=N;i+=j){
		P[i]=false;
			}
		}
	}
}
int main(){
	sieve();
	int L,R;
	scanf("%d%d",&L,&R);
	int n=R-L+1;
	int c[n];
	for (int i=0;i<n;i++) scanf("%d",&c[i]);
	
	int count=0;
	
	for (int i=0;i<n;i++){
		int val=c[i]
		int res=0;
		for (int j=1;j<=val;j++){
    	if (c[i]%j==0){
    		res++;
		}
	}
		if (res<=N && P[res]){
		count++;
		}
	}
	printf("%d",count);
}

