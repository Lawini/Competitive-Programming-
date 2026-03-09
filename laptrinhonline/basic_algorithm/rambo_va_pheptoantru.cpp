#include <stdio.h>
#include <math.h>
int main(){
	long long n,k;
	scanf("%lld%lld",&n,&k);
	long long a;
	for (int i=0;i<k;i++)
	{
		if (n%10 !=0)
		{
			n-=1;  
			a=n;
		}
		else /*(n%10==0)*/ n/=10;
		a=n;
		
	}
	printf("%lld",a);
}
