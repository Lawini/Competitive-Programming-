#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	int dem=0;
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=1;i<n-1;i++)
	{
		if (a[i]>a[i-1] && a[i]>a[i+1])
		dem++;
	}
	printf("%d",dem);

}
