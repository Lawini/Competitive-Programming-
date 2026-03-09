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
	char s[N];
	scanf("%s", s);
	
	
	int n = strlen (s);
	
	// tinh tong ban dau
	long long sum = 0;
	for (int i = 0; i < n; i++){
		sum += (s[i] - '0');
	}
	
	
	
	//tinh so du
	int k = sum % 3;

	
	
	
	long long cnt[3];
	cnt [0] = 1;
	cnt [1] = 0;
	cnt [2] = 0;
	
	
	long long cur_sum = 0;
	long long ans = 0;
	
	//thuat toan chinh
	for (int i = 0; i < strlen(s); i++){
		//digit la so bi xoa
		
		int digit = s[i] - '0';
		cur_sum += digit;	
		//current _rem so du hien tai	
		int cur_rem = cur_sum % 3;
		
		int target = (cur_rem - k + 3) % 3;
		ans += cnt[target];
		cnt[cur_rem]++;
		}
		
		
	//khong dc xoa het nen -1 TH
	ans--;
	
	if (k == 0){
		ans++; //neu so ban dau da chia het cho 3
	}	
	
	
	printf("%lld\n",ans);
}
void output(){
	
}
int main(){
	
	clock_t start = clock();
	
	
	
	
	
	//	freopen("CAU5.INP", "r", stdin);
	//  freopen("CAU5.OUT", "w", stdout);
    
	
	//Coding
	int t = 1;
    //scanf("%d",t);
    while(t--){
    solve();
    }
    
    
    
    
    
    
    
    
    
    
    
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "\nTime: %.3f seconds\n", time_taken);
}
