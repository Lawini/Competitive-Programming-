#include<stdio.h>
#include<math.h> //fabs() tri tuyet doi cho so thuc
#include<stdlib.h> //abs() tri tuyet doi cho so nguyen
int main(){
    long long n;
    scanf("%lld",&n);
    long long gt=1,count=0;
    for (long long i=1;i<=n;i++)
    gt*=i;
    
	long long du=gt% (long long)(1.e9+7);
    long long du1=du;
    if (du1 == 0) count = 1;
    else {
    while (du1 != 0) {
        count++;
        du1 /= 10;
    }
}
    for (int i=0;i<9-count;i++)
    printf("0");
    printf("%lld",du);

}

