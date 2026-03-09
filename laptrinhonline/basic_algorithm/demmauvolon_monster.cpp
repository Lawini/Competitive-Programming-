#include <stdio.h>
#include <math.h>
int main(){
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
    int count;
    	if (A!=B && A!=C) count=3;
    	if ((A==B && B!=C) || (A==C && B!=C) || (C==B && A!=C)) count=2;
    	if(A==B && A==C) count=1;
	
	printf("%d",count);
}
