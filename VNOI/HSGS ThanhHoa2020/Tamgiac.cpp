#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#define N 200005 
#define ll long long

int a[N];
long long pre[N]; 


long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}




int can_tren(int L, int R, int limit){
	int ans = -1;
	while (L <= R){
		int mid = L + (R - L) / 2;
		if (a[mid] < limit ){
			ans = mid;   //co the thoa man
			L = mid + 1;
		}
		else {
			R =  mid - 1;
		}
		
	}
	return ans;
}

int phan_loai(int L, int R, ll sum_sq){
	int ans = -1;
	while (L <= R){
		int mid = L + (R - L) / 2;
		ll sq_mid = (ll) a[mid] * a[mid];
		if (sq_mid >= sum_sq ){
			ans = mid;   //co the thoa man
			R = mid - 1; //tim thu ben tay tren xem co so nao phu hop khong
		}
		else {
			L =  mid + 1;
		}
		
	}
	return ans;
}

void solve(){
	
    //two pointer
    // 	while (L < R){
	// 	if (a[L] + a[R] == k){
	// 		count++;
	// 		L++;
	// 		R--;
	// 	}
	// 	else if (a[L] + a[R] < k){
	// 		L++;
	// 	}
	// 	else {
	// 		R--;
	// 	}
	// }
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
    	scanf("%d",&a[i]);
	}
    qsort(a, n, sizeof(int), compare);
    
	ll nhon = 0;
	ll vuong = 0;
	ll tu = 0;
    
    //a[i] < a[j] < a[k];
 	for (int i = 0; i < n - 2; i++){
 		for (int j = i + 1 ; j < n - 1; j++){
 	 			
 			//can tim k co vi tri lon nhat de tao thanh 1 tam giac
 			
			 	
			int sum_len = a[i] + a[j];
			
			int pos_limit = can_tren(j + 1, n - 1, sum_len);
 			
 			
 			if (pos_limit == -1) continue;
 			ll sum_sq = (ll) a[i] * a[i] +(ll) a[j] * a[j];
 			
 			int split = phan_loai (j+1, pos_limit, sum_sq);
 			if (split == -1){
 				nhon +=(pos_limit - (j + 1) +1);	
			}
			else {
				if (split > j + 1){
					nhon+= (split - 1) - (j + 1) + 1;
				}
			
			
			//check lai vi tri split
			ll val_sq = (ll) a[split] * a[split];
			
			if (val_sq == sum_sq){
				vuong++;
				tu +=(pos_limit - (split + 1) +1);
			}
			else{
				// val_sq > sum_sq -> Tai split da la TU 
                tu += (pos_limit - split +1);
				}	
			}
		}
	}
	printf("%lld %lld %lld\n", nhon, vuong, tu);
}
void output(){

}
int main(){
	freopen("CAU5.INP", "r", stdin);
    freopen("CAU5.OUT", "w", stdout);
	clock_t start = clock();
	
    int t=1;
	
    while(t--){
    solve();
    }
    
    
    
    clock_t end = clock();
    double time_taken = (double)(end - start) / CLOCKS_PER_SEC;
    fprintf(stderr, "\nTime: %.3f seconds\n", time_taken);
    return 0;
}
