#include<stdio.h>
#include<math.h> //fabs() tri tuyet doi cho so thuc
#include<stdlib.h> //abs() tri tuyet doi cho so nguyen
int main(){
	int n,s;
	scanf("%d%d",&n,&s);
	int dem=0;
	
	for (int i=0;i<=n;i++){
		for (int j=0;j<=n;j++) {
			int z=s-i-j;
			if (z>=0 && z<=n)
			dem+=1;
			}
		}
	

	printf("%d",dem);
}
