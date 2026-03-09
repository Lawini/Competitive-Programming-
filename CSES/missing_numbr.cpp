#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n-1;i++) 
	scanf("%d",&a[i]);
	//phat hien so can tim
	int check[n+1];
	for (int i=1;i<=n;i++) check[i]=0;
	
	for (int i=0;i<n-1;i++){
		check[a[i]]=1;    //check xem nhung so nao chua xuat hien
	}
	
	for (int i=1;i<=n;i++){
		if(check[i] ==0){
			printf("%d\n",i); 
			break;
		}
	}
}
