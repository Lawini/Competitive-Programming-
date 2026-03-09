#include <stdio.h>
void swap(int *a, int *b) {
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int A,B,C;
	scanf("%d%d%d",&A, &B, &C);
	if (A<B) swap (&A, &B);
	else if (A<C) swap (&A, &C);
	
	if (A==B+C) printf("Yes");
	else printf("No");
	return 0;
}
