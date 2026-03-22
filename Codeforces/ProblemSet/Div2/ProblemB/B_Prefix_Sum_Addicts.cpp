#include<stdio.h>
#define N 100005
long long s[N];
void solve(){
	int n,k;
	scanf("%d%d",&n,&k);
	for (int i=1;i<=k;i++){
		scanf("%lld",&s[i]);
	}
	if (k==1){
		printf("Yes\n");
		return;
	}

	
	for (int i=2;i<=k;i++){
		long long val=s[i]-s[i-1];
		if (i>2){
			long long pre=s[i-1]-s[i-2];
			if (val<pre){
				printf("No\n");
				return;
			}
		}
	}
	
	// thieu a1,a2,...acount
	//acount<=limit
	//a1<=limit
	//a2<=limit 
	//...
	//a1+a2+..+acount=s[1]<limit*count
	long long count=n-k+1;
	long long limit=s[2]-s[1]; //=a[1];
	long long remain=s[1];
	if (s[1]>limit*count){
		printf("No\n");
		return;
	}
	printf("Yes\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
}
