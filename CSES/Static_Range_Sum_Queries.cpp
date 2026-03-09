#include<stdio.h>
void solve(int n, long long a[],long long p[]){
	int l,r;
	scanf("%d%d",&l,&r);
	printf("%lld\n",p[r]-p[l-1]);
	
}
int main(){
	int n,q;
	scanf("%d%d",&n,&q);
	
	long long a[n+1];
	a[0]=0;
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
		long long p[n+1];
	p[0]=0;
	for(int i=1;i<=n;i++){
		p[i]=p[i-1]+a[i];
	}
	
	
	while(q--){
		solve(n,a,p);
	}
	
}
