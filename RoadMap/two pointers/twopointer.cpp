#include<stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for (int i=0 ;i<n;i++) scanf("%d",&a[i]);
	
	int L=0;
	int R=n-1;
	
	while(L<R){
		int sum=a[L]+a[R];
		if (sum==m){
			printf("Tim thay %d + %d = %d",a[L],a[R],m);
			return 0;
		}
		else if (sum>m){
			R--;
		}
		else {
			L++;
		}
	}
	printf("Khong tim thay");
	return 0;
}
