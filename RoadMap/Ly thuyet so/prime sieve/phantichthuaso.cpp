#include<stdio.h>
#include<math.h>
void division(long long n){
	printf("%lld =",n);
	
	//1 xu ly rieng so 2 
	if (n%2==0){
		printf("2");
		int dem=0;
		while(n%2==0){
			dem++;
			n/=2;
		}
	printf("^%d",dem);
	if (n>1) printf(" * ");
}
	//2 duyet cac so le tu 3 den can bac 2 cua n
	for (long long i=3;i*i<=n;i+=2){
		if (n%i==0){
			int dem=0;
			printf("%lld",i);
		
		//chia n cho i den khi khong chia het dc nua
		while(n%i==0){
			dem++;
			n/=i;
		}
		printf("^%d",dem);
		if (n>1) printf(" * ");
		}
	}
	
	
	//3 neu sau cung n>1 thi n chinh la thua so nguyen to cung cung
	if (n>1){
	printf("%lld^1",n);
	}
	printf("\n");
}

int main() {
	long long n;
	scanf("%lld",&n);
	division(n);
	return 0;
}






