#include <stdio.h>
#include <stdlib.h>
int cmp(const void *a, const void *b) {
    long long val1 = *(long long*)a;
    long long val2 = *(long long*)b;
    
    // Ko dung phep tru (val1 - val2) tranh overflow
    if(val1 > val2) return 1;
    if(val1 < val2) return -1;
    return 0;
}
long long maximize(long long a, long long b){
	return (a > b) ? a : b;
}
int main(){
	int t;
	scanf("%d",&t);
	
	while (t--){
		int n;
		scanf("%d", &n);
		
		long long a[n];
		for (int i = 0; i < n; i++){
			scanf("%lld",&a[i]);
		}	
		
		qsort(a, n,  sizeof(long long),cmp);
		long long ans=maximize(a[0], a[1]-a[0]);
		printf("%lld\n",ans);
		
	}
		
	
}
