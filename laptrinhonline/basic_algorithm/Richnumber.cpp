#include <stdio.h>
#include <math.h>
#include <string.h>
int main(){
	int a;
	scanf("%d",&a);
	int tong=0;
	if (a<1) {
	printf("Poor Number"); 
	return 0;
}
	else {
		for (int i=1;i<a;i++) {
	    if (a%i==0) 
		tong=tong+i;   
	}
}
	if(tong>a) printf("Rich Number\n");
	else printf("Poor Number\n");
}
