#include<stdio.h>
#include<stdlib.h>
int cmp(const void *a, const void *b) {
    long long val1 = *(long long*)a;
    long long val2 = *(long long*)b;
    
    // Ko dung phep tru (val1 - val2) tranh overflow
    if(val1 > val2) return 1;
    if(val1 < val2) return -1;
    return 0;
}
void solve(int n,long long P[], long long Ps[]){
	int t,l,r;
	scanf("%d%d%d",&t,&l,&r);
	long long sum;
	
	if (t==1){
		sum=P[r]-P[l-1];
	}
	else if (t==2){
		sum=Ps[r]-Ps[l-1];
	}
	
	printf("%lld\n",sum);
	
}
int main(){
	int n;
	scanf("%d",&n);
	
	long long a[n+1];
	a[0]=0;
	for (int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
	}
		
	//mang 1 
	long long P[n+1];
	P[0]=0;
	for (int i=1;i<=n;i++){
	P[i]=P[i-1]+a[i];
	}
	
	
	
	//mang 2
	qsort(a+1,n,sizeof(long long),cmp);
	long long Ps[n+1];
	Ps[0]=0;
	for (int i=1;i<=n;i++){
	Ps[i]=Ps[i-1]+a[i];
	}
	
	
	//solve
	int m;
	scanf("%d",&m);
	while(m--){
		solve(n,P,Ps);
	}
	return 0;
	
}
