#include<stdio.h>
int n,k;
long long a[200005];
long long maxL(long long a, long long b){
    return (a>b) ? a:b;
}
int check(long long limits){
    int count=1;
    long long curs=0;
    for (int i=0;i<n;i++){

        if (curs+a[i]<=limits){
            curs+=a[i];
        }
        else{
            count++;
            curs=a[i];
        }
    }
    return count<=k;
}
int main(){
    scanf("%d",&n);
    scanf("%d",&k);
    
    long long L=0;
    long long R=0;
    for (int i=0;i<n;i++){
        scanf("%lld",&a[i]);
        L=maxL(L,a[i]);
        R+=a[i];
    }

    long long low=L;
    long long high=R;
    long long ans=high;
    while(low<=high){
        long long mid=low+(high-low)/2;
        if (check(mid)){
            ans=mid;
            high=mid-1;
        }
        else {
            low=mid+1;
        }
    }
    printf("%lld",ans);
}