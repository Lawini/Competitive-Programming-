#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int min=a[0], vt;
	for (int i=1;i<n;i++)
	{
		if(a[i]<min) {
		
		min=a[i];
		vt=i+1;
	}
	}
	printf("Menor valor: %d\n",min);
	printf("Posicao: %d\n",vt);
	}
