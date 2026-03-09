#include <stdio.h>
#include<math.h>
int main(){
	long n;
	scanf("%ld",&n);
	int dem=0;
	if (n<2) {
	printf("NO\n");
	return 0;
	}
	if (n>=2){
	for (int i=2;i*i<=n;i++){
		if (n%i==0){
			printf("NO\n");
			return 0;
		}	
	}
	}
	printf("YES\n");

	return 0;
}

