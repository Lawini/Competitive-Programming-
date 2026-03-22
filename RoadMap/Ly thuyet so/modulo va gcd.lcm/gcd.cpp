#include<stdio.h>
/*
Cach 1:
long long GCD(long long a, long long b){
	while(b > 0){
	a = a % b;
	int tmp = a;
	a = b;
	b = tmp;
	}

}

*/
//cach 2: dung backtracking va quay lui (recursion)

long long gcd(long long a, long b){
	if (b==0) return a;
	return gcd(b,a%b); //goi de quy dung cach
} 
int main(){
	long long a,b;
	scanf("%lld%lld",&a,&b);
	gcd(a,b); //de goi ham chi can truy van bien 
	printf("GCD = %lld",gcd(a,b));
	return 0;
}
