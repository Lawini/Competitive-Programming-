#include<stdio.h>
#define N 400005
int l[N], r[N];
int cnt[N];
int pre[N];
void solve(){
	int n;
	scanf("%d",&n);
	
	for (int i=0;i<=2*n+5;i++){
		pre[i]=0;
		cnt[i]=0;
	}
	for (int i=0;i<n;i++){
		scanf("%d%d",&l[i],&r[i]);
		if (l[i]==r[i]){
			cnt[l[i]]++;
		}
	}
	for (int i=1;i<=2*n+5;i++){
		int occupied=(cnt[i]>0) ? 1:0;
		pre[i]=pre[i-1]+occupied;
	}
	for  (int i=0;i<n;i++){
		//kra ghe co dinh 2=2 3=3
		if (l[i]==r[i]){
			if (cnt[l[i]]==1){
				printf("1");
			}
			else printf("0");
		}
		//ktra cai linh hoat vd:(2->5)
		else {
			int total=r[i]-l[i]+1;
			int os=pre[r[i]]-pre[l[i]-1];
			if (os==total){
				printf("0");
			}
			else printf("1");
		}
	}
	printf("\n");
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}
}
