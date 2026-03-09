#include<stdio.h>
#include<stdlib.h>
void solve(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	//
	long long total=0;
		for (int i=1;i<n;i++){
		total+=abs(a[i]-a[i-1]);
	}
	long long min=total;
	for(int i=0;i<n;i++){
		long long cur=total;
		if (i==0){
			cur-=abs(a[1]-a[0]);
		}
		else if (i==n-1){
			cur-=abs(a[n-1]-a[n-2]);
		}
		else {
			cur=cur-abs(a[i]-a[i-1])-abs(a[i+1]-a[i])+abs(a[i+1]-a[i-1]);
		}
		if (min>cur){
			min=cur;
		}
	}
	printf("%lld\n",min);
	
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		solve();
	}	
}
