#include<stdio.h>
void solve(){
	long long L,R;
	scanf("%lld%lld",&L,&R);
	
	if (2*L <=R){
		printf("%lld %lld\n",L,2*L);
	}
	else printf("-1 -1\n");
}	
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
}
