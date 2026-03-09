#include<stdio.h>
#include <stdlib.h>
int n;
long long k;
int a[200005];

//qsort ()
int cmp(const void *a, const void *b) {
    if (*(int*)a < *(int*)b) return -1;
    if (*(int*)a > *(int*)b) return 1;
    return 0;
}
int check(long long val){
    long long pay=0;
    for (int i=n/2;i<n;i++){
        if (a[i]<val){
            pay+=(val-a[i]);
        }
        if (pay>k) return 0;
    }
    return pay<=k;
}
int main(){
    scanf("%d",&n);
    scanf("%lld",&k);
    for (int i=0;i<n;i++) scanf("%d",&a[i]);

    qsort(a, n, sizeof(int), cmp);

    long long low=a[n/2];
    long long high=1000000000+k;
    long long ans;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if (check(mid)){
            ans=mid;
            low=mid+1;
        }
        else {
            high=mid-1;
        }
    }
    printf("%lld",ans);
    return 0;
}