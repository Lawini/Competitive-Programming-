#include<stdio.h>
long long binpow(int a, long long b, int m){
    long long res=1;
    a%m;
    while(b>0){
        if (b%2==1) res=res*a%m;
        a=a*a%m;
        b/=2;
    }
    return res;
}
int main(){
    int a=8;
    long long b; 
    scanf("%lld",&b);
    //muon chay chuong trinh lien tuc thi chay lenh nay
    //// while(scanf("%lld,&b") !=EOF) {...}
    int m=10;
    printf("%lld",binpow(a,b,m));


}