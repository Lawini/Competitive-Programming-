#include <stdio.h>
#include <string.h>
int main(){
    long long n;
    scanf("%lld",&n);
    
    long long a[n];
    for (int i=0;i<n;i++) scanf("%lld",&a[i]);
    
    long long steps=0;
    for (int i=1;i<n;i++){
    	if (a[i]<a[i-1]) {
    	long long differences=(a[i-1]-a[i]);
    	steps+=differences;  
    	a[i]=a[i-1];
 	   }	
	}
	printf("%lld\n",steps);
}
