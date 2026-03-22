#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long t;
	scanf("%lld",&t);
	
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	
	int ans=0;
	int cur=0;
	int L=0;
	
	for (int R=0;R<n;R++){
		cur+=a[R];
		while(cur>t){
			cur=cur-a[L];
			L++;
		}
		
		int b=R-L+1;
		if (b>ans) ans=b;
	}
	printf("%d",ans);
}

