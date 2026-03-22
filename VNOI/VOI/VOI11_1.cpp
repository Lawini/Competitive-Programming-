#include<stdio.h>
#include<limits.h>
#define N INT_MIN
int a[1005][1005];
long long S[1005][1005];
long long maximize(long long a, long long b){
    return (a>b) ? a:b;
}
int main(){
    int n,k;
    scanf("%d%d",&n,&k);

    for (int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            scanf("%d",&a[i][j]);
        }
    }


    //mang cong don hinh chu nhat den i,j
    for(int i=1;i<=n;i++){
        for (int j=1;j<=n;j++){
            S[i][j]+=S[i][j-1]+S[i-1][j]-S[i-1][j-1]+a[i][j];
        }   
    }
    
    //tinh tu toa do (x,y) den toa do (i,j)
    long long max;
    for (int i = k; i <= n; i++){
        for (int j = k; j <= n; j++){
        long long sum= S[i][j] - S[i - k][j] - S[i][j - k] + S[i - k][j - k];
        max=maximize(max,sum);
    }
}
    printf("%lld",max);




}