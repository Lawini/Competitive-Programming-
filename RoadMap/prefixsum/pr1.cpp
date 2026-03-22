#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }

    int P[n+1];
    P[0]=a[0];
    for (int i=1;i<=n;i++){
        P[i]=P[i-1]+a[i];
        printf("%d ",P[i]);
    }
    int R=4, L=2;
    int sum=P[R]-P[L-1];
    printf("sum = %d",sum);
}