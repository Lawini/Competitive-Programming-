#include<stdio.h>
// tim chu so tan cung cua a^b
long long binpow(long long a, long long b, long long m){
	long long res=1;
	a%=m; //dam bao a nho hon m
	while (b>0){
		if (b%2==1) res=res*a%m; 
		a=a*a%m; 
		b/=2; 
	}
	return res;
}
int main(){
	long long a,b,m;
	scanf("%lld%lld%lld",&a,&b,&m);
	printf("%lld",binpow(a,b,m));
}
