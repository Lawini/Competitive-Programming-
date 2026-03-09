#include <stdio.h>
#include <math.h>
#define N 1000
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
    int n;
    scanf("%d",&n);
    int count=0;
    for (int i=1;i<=n;i++){
    	if (n%i==0){
    		count++;
		}
	}
	for (int i=0;i<n;i++){
		if (P[count]){
			printf("YES");
			return 0;
		}
	}
		printf("NO");
   
}

