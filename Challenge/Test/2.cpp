#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define N 200005 


long long a[N];
long long pre[N]; 


long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }

void solve() {
  
    int n, q; 
    scanf("%d%d",&n,&q);


    for (int i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);
    }

    // --- SOLVE ---
    
    //prefix
    pre[0] = 0;
    for (int i = 1; i <= n; i++) {
        pre[i] = pre[i-1] + a[i];
    }


    while (q--) {
        int l, r;
        scanf("%d %d", &l, &r);
        printf("%lld\n", pre[r] - pre[l-1]);
    }
}
void output(){

}
int main() {
    solve();
    return 0;
}