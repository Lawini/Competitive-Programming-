#include <stdio.h>
#include <math.h>
//unsighed chi lay so duong
void swap(int *a, int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}

int main(){
    int A,B,C;
    scanf("%d%d%d",&A,&B,&C);
	if (A<B) swap (&A, &B);
	if (A<C) swap (&A, &C);
	
	if (B+C>A)
	{
		if (B*B+C*C==A*A) printf("TAM GIAC VUONG");
		else if (B==C || B==A || A==B) printf("TAM GIAC CAN");
		else printf("TAM GIAC THUONG");

	 } 
	 else printf("KHONG PHAI TAM GIAC");
}
