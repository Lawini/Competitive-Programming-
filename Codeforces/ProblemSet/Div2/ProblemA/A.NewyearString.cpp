#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#define ll long long
#define N 200005 
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }
int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}




void solve(){
	int n;
	scanf("%d",&n);
	
	char s[n];
	scanf ("%s", s);
	
	
	//TH1 check 2026 
	int found_2025 = 0;
	int found_2026 = 0;
	
	
	for (int i = 0; i <= n - 4; i++){
		if (s[i] == '2' && s[i + 1] == '0' && s[i + 2] == '2'){
			if (s[i + 3] == '5'){
				found_2025 = 1;
			}
			if (s[i + 3] =='6'){
			found_2026 = 1;
			}
		}
	}
	
	//TH2 eliminate 2025 neu chuoi ko xuat hien 2026
	if (found_2025 == 1 && found_2026 == 0){
		printf("1\n");
	}
	else {
		printf("0\n");
	}

}
int main (){
	
	
	int t;
	scanf ("%d",&t);
	
	while (t--){
		solve();
	}
	
	
	
}
