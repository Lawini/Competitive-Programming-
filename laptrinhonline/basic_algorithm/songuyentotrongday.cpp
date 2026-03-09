#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];

	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	
	for (int i=0;i<=n;i++){
		int dem=0;
		if (a[i]>1) {
	    for (int j=1;j<=a[i];j++) {
		if (a[i]%j==0)
		dem++;
	}
		if (dem==2) 
		printf(" %d",a[i]);
	}
}
return 0;
}
