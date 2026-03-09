#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	int test,min=1000;

		for (int y=a[0];y<=a[n-1];y++){
			for(int i=0;i<n;i++){
			test+=pow((a[i]-y),2);
		}
		if (test<min) 
			min=test;
	}
	printf("%d\n",min);
}
