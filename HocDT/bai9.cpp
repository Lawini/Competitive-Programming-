#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	
	int t[n];
	for (int i=0;i<n;i++){
		t[i]=0;
	}
	for (int i=0;i<n;i++){
		t[a[i]%10]++; //t[1]=1 //t[3]=1 t[1]=2 t[1]=3
	}
	int mod=0;
	for (int i=0;i<n;i++){
		if (t[a[i]%10]>mod);
		mod=a[i]%10;
	}
	printf("%d",mod);

	
}
