#include <stdio.h>
#include <limits.h>
#define N 100005
#include <string.h>
#include <stdbool.h>
char stack[N];
int l = 0;

//dem luong nuoc 
long long min_v (long long a, long long b){
	return a < b ? a : b;
}
long long max_v (long long a, long long b){
	return a > b ? a : b;
}
//void push (int x){
//	stack[l] = x;
//	l++;
//}
//int pop (){
//	stack [--l];
//	
//}
//bool empty (){
//	return 
//	
//}
//
//void solve(){
//
//	
//	for (int i = 0; i < n; i++){
//		if (max > a[i]){
//			a[i] ;
//		}
//		else i f(min < a[i]){
//			a
//		}
//	}
//	
//	
//}

int main(){
	int n;
	scanf("%d", &n);
	
	
	long long a[100], l[100], r[100], s =0;
	for (int i = 1; i <= n; i++){
		scanf ("%lld", &a[i]);
	}
	
	
	l[1] = 0;
	for (int i = 2; i <= n; i++){
		l[i] = max_v (a[i - 1], l[i - 1]);
	}
	
	r[n] = 0;
	for (int i = n - 1; i >= 1; i--){
		r[i] = max_v (a[i + 1], r[i + 1]);
	}
	for (int i = 1; i <= n; i++){
		s = max_v (0, min_v (l[i], r[i]) - a[i]);
	}
	
	

	printf("%lld", s);
	
	
}
