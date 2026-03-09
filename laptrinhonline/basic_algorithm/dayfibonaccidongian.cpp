#include <stdio.h>
#include <math.h>
int main(){
	int n;
	scanf("%d",&n); 
	int s1=0, s2=1, tong;
	if (n==1) printf("0");
	else if (n==2) printf("0 1");
	else if (n>2) {
	printf("0 1");
	for (int i=2;i<n;i++){
	 tong=s1+s2;
	 printf(" %d",tong);
	 s1=s2;
	 s2=tong;
	}	
}
	return 0;
}
