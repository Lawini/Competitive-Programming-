#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int count[n];
	for (int i=0;i<n;i++){
		count[i]=0;
	}
	for (int i=0;i<n;i++){
		count[a[i]]++;
	}
	int max=0;
	int vt=0;
	for (int i=0;i<n;i++){
		if (count[a[i]]>max){
			max=count[a[i]];
			vt=a[i];
		}
	}
	printf("%d voi so lan xuat hien la %d",vt,max);
}
