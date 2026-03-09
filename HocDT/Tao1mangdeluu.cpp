/*Cho 1 day so gom n so nguyen duong nhap day an (co the khong lien tiep) dai nhat sao gia tri sau lon hon gia tri truoc dung 1 don vi */
#include<stdio.h>
#include<stdlib.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	a[0]=0;
	for (int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	
	int p[n+1];
	for (int i=0;i<=n;i++){
		p[i]=0;
	}

	for(int i=1;i<=n;i++){
		p[a[i]]=p[a[i]-1]+1;
	}
	int max=p[1];
	for (int i=1;i<=n;i++){
		if (p[i]>max){
		max=p[i];
	}
	}

	printf("%d",max);
	
}
