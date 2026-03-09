/*
#include<stdio.h>
long long gcd(long long a, long long b){
	if (b==0) return a;
	return gcd(b,a%b);
}
int main(){
	long long n,m;
	scanf("%lld%lld",&n,&m);
	gcd(n,m);
	printf("%lld",gcd(n,m));
}

*/
#include<stdio.h>
#include<stdbool.h>
#define N 300
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


int main(){
	sieve();
	
	int n;
	scanf("%d",&n);
	if (n<=20 && primeN[n]){
		printf("%d la so nguyen to",n);
	}
	else printf("%d khong la so nguyen to",n);
}
