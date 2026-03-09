#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	int max=a[0];
	for (int i=1;i<n;i++){
		if (a[i]>max){
			max=a[i];
		}
	}
	int max2=-9999999;
	for (int i=0;i<n;i++){
		if (max2<a[i] && max>a[i]){
			max2=a[i];
		}
	}
	printf("%d",max2);
}
