#include <stdio.h>
int main (){
	long long n,s,t;
	scanf("%lld%lld%lld",&n,&s,&t);
	
	long long min=s<t ? s:t;
	long long result=n-min+1;
	printf("%lld",result);
	
	return 0;
	
}
