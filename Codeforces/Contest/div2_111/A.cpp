#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <time.h>
#include <string.h>
#define ll long long
#define N 1000005
long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }


int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a); 
}
int a[N];
void solve(){
    int n;
    scanf("%d", &n);

    long long sum = 0;
    for (int i = 1; i <= n; i++){
        sum += a[i];
    }
    qsort(a, n, sizeof(int), compare);

    int count = 0;
    long long cur_sum = 0;
    for (int i = 1; i <= n; i++){
        cur_sum += a[i];
        count++;
        if (cur_sum > sum / 2){
            break;
        }
    }
    printf("%d", count);



}
void output(){
	
}
int main(){
	
	//Coding
	int t;
    scanf("%d",&t);
    while(t--){
    solve();
    }
    
}
