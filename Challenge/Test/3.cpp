#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#define N 200005 
#define ll long long
#define dbt double
long long a[N];
long long pre[N]; 


long long max_val(long long a, long long b) { return (a > b) ? a : b; }
long long min_val(long long a, long long b) { return (a < b) ? a : b; }
long long my_abs(long long a) { return (a < 0) ? -a : a; }
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}



void solve(){
    int n; ll s;
    scanf("%d%lld",&n,&s);

    //nhap mang
    for (int i = 0; i < n; i++){
        scanf("%lld",&a[i]);
    }


    int l = 0;
    ll sum = 0;
    int ans = INT_MAX;
    	for (int R = 0; R < n; R++){
            sum += a[R]; 
            
            while (sum >= s){
            ans = min_val(ans, R-l+1);
            sum -= a[l];
            l++;
            }
        }
    
    

    if (ans == INT_MAX) printf ("0\n");
    else printf("%d\n", ans);

    }


    
void output(){

}
int main(){
    // int t;
    // scanf("%d",t);

    int t = 1;
    while(t--){
    solve();
    }
}