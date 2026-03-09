#include<stdio.h>
#include<math.h>
void solve(long long n){
	for(int i=2;i<=sqrt(n);i++){
		while (n%i==0){
			printf("%d ",i);
			n/=i;
		}
	}
	if (n>1){
		printf("%d ",n);
	}
}
int main(){
	long long n;
	scanf("%d",&n);
	solve(n);
	return 0;
}
