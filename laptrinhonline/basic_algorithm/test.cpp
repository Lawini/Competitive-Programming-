#include<stdio.h>
#include<math.h>
int main(){
	int n;
	printf("Nhap phan tu n =");
	scanf("%d",&n);
	int k;
	printf("nhap phan tu k ");
	scanf("%d",&k);
	int a[n];
	printf("Mang nhap la ");
	for (int i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	} 
	
	
	if (k < n){
		for (int i = n-1; i>=k; i--){
			a[i+1]=a[i];
		}
	int p;
	a[k]=p;
	n++;
	
	printf("Noi dung cua mang");
}
	for (int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
	}
