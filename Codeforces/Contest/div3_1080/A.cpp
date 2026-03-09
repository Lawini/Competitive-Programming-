#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#define ll long long
#define N 100005
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }
int sort(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}


void solve(){
   int n;
   scanf("%d", &n);

    int a[n];
    int count[N];
    for (int i = 1; i < N; i++){
    	count[i] = 0;
	}
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
        count[a[i]]++;
    }
    if (count[67] >= 1){
        printf("yes\n");
    }
    else {
        printf("no\n");
    }





}
int main(){
	int t;
    scanf("%d",&t);
    while (t--){
    solve();
    }
}
    

