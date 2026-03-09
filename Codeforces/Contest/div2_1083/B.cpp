#include <stdio.h>
#define N 100005
void solve() {
    long long n;
    scanf("%lld", &n);
	
	long long k = 1;
	for (long long i = 2; i * i <=n; i++){
		if (n % i == 0){
			k *= i;
			
		while(n % i == 0){
			n /= i;
			}
		}
	}
	
	if (n > 1){
		k *= n;
	}
	printf("%lld\n", k);


    
}

int main() {
    int t;
	scanf("%d",&t);
        while (t--) {
            solve();
        }
    return 0;
}
