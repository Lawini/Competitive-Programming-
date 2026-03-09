#include <stdio.h>
#include <math.h>
#include <limits.h>
int main(){
	int n;
	scanf("%d",&n);

	double S=acos(-1.0)*n*n;
	int a1=(int) sqrt(S);
	int a2=a1+1;
	//muon dien tich gan nhat thi hieu giua 2 dien tich phai min 
	//y tuong la s tron - s vuong
	double diff1=fabs(S-1.0*a1*a1);
	double diff2=fabs(S-1.0*a2*a2);
	
	if (diff2<=diff1) printf("%d\n",a2);
	else printf("%d\n",a1);
}
	
