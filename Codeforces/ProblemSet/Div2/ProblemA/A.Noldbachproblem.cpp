#include<stdio.h>
#include<stdbool.h>
#define N 1000
bool p[N+1];
void sieve(){
	for (int i=0;i<=N;i++){
		p[i]=true;
	}
	p[0]=false;
	p[1]=false;
	
	for(int j=2;j<=N;j++){
		if(p[j]==true){
			for(int i=j*j;i<=N;i+=j){
				p[i]=false;
			}
		}
	}
	
}
int main(){
	sieve();
	int n,k;
	scanf("%d%d",&n,&k);
	int prime[1001];
	int count=0;
	for (int i=2;i<=n;i++){
		if(p[i]==true){
		prime[count]=i;
		count++;
		}
	}
	
	int count1=0;
	// kiem tra dk p1+p2+1
	for(int i = 0; i < count-1; i++){
		int sum=prime[i]+prime[i+1]+1;
		
		if (sum<=n && p[sum]==true){
			count1++;
		}
	}
	
	if (count1>=k){
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}

}
