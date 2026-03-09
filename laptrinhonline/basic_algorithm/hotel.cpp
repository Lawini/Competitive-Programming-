#include<stdio.h>
#include<math.h>
#include <string.h>
int main(){
    long long n,k,x,y;
    scanf("%lld%lld%lld%lld",&n,&k,&x,&y);
    if (n<k) printf("%lld",(long long) n*x);
    else {
	long long tong=k*x+(n-k)*y;
    printf("%lld\n",tong);
}

}
