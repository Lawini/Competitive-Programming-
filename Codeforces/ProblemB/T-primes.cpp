// https://codeforces.com/problemset/problem/230/B
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	int n;
	scanf ("%d",&n);
	//
	long long a[n];
	for (int i=0;i<n;i++) scanf("%lld",&a[i]);
	
	
	
	// tao mang danh dau so nto 1e6
	int MAX=1000000;
	bool prime[MAX+1];
	//Sieve of Eratosthenes
	for (int i=2;i<=MAX;i++) prime[i]=true;
	for (int i=2;i*i<=MAX;i++){
		if (prime[i]){
			for (int j=i*i;j<=MAX;j+=i)
			prime[j]=false;
		}
	}
	for (int i=0;i<n;i++){
		long long x=a[i];
		long long can=sqrt(x);
	//kiem tra xem x co phai so chinh phuong ko
	if (can*can==x && prime [can]==true)
	printf("YES\n");
	else printf("NO\n");
}
}
