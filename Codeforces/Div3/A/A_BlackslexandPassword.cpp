#include<stdio.h>
void solve(){
	int k,x;
	scanf("%d%d",&k,&x);
	printf("%d\n",x*k+1);
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}	
}
