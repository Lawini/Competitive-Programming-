#include<stdio.h>
long long gcd(long long a, long b){
	if (b==0) return a;
	return gcd(b,a%b); //goi de quy dung cach
} 
long long lcm(long long a,long long b){
	if (a==0 || b==0) return 0;
	return (a/gcd(a,b))*b;
}
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	gcd(a,b); //de goi ham chi can truy van bien 
	printf("GCD = %lld",gcd(a,b));
	lcm(a,b);
	printf("\nLCM = %lld",lcm(a,b));
	return 0;
}


// long long gcd(long long a, long long b)
// if (b==0) return a;
// return gcd(b,a%b)