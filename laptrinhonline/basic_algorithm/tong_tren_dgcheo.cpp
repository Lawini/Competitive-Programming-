#include<stdio.h>
#include<math.h> //fabs() tri tuyet doi cho so thuc
#include<stdlib.h> //abs() tri tuyet doi cho so nguyen
int main(){
	int n;
	scanf("%d",&n);// luu phan tu thu nhat cua mang
    int a[n][n]; //so hang va so cot
    for (int i=0;i<n;i++){
    	for (int j=0;j<n;j++) {
    	scanf("%d",&a[i][j]);
	}
}   
//tong cac duong cheo son song voi duong kheo chinh
    for(int k=-(n-1);k<=n-1;k++){
    	long long sum=0;
    	for (int i=0;i<n;i++)
    	{
    		int j=i-k;
    		if (j>=0 && j<n) sum+=a[i][j];
		}
		printf("%lld\n",sum);
	}
}
