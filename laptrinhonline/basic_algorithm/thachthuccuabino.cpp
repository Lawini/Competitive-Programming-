#include<stdio.h>
#include<math.h>
int main(){
	int n;
	scanf("%d",&n);
	
	int a[n];
	int d1=0,d2=0,d3=0,d4=0;
	for (int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n;i++)
	{
		if (a[i]%2==0) d1+=1;
		if (a[i]%3==0) d2+=1;
		if (a[i]%4==0) d3+=1;
		if (a[i]%5==0) d4+=1;
	}
	printf("%d Multiplo(s) de 2\n",d1);
	printf("%d Multiplo(s) de 3\n",d2);
	printf("%d Multiplo(s) de 4\n",d3);
	printf("%d Multiplo(s) de 5\n",d4);
    return 0;
}
