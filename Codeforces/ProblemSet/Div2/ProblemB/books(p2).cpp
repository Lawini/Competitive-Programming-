#include <stdio.h>
int main(){
	int n;
	long long t;
	scanf("%d", &n);
	scanf ("%lld", &t);
	
	int a[n];
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	
	
	int L = 0;
	int cur_time = 0;
	int max_b = 0;
	for (int R = 0; R < n; R++){
		cur_time += a[R];
		while (cur_time > t){
			cur_time -= a[L];
			L++;
		}
		
		int cur_b = R - L + 1;
		if (cur_b > max_b){

			max_b = cur_b;
		}
	}
	
	printf("%d", max_b);
	
}
