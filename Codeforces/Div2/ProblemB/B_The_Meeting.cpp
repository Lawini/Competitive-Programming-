#include<stdio.h>
#include <stdbool.h>
int n;
int a[60005];  //toa do
int v[60005]; //vantoc
double maxL(double a, double b) {
    return (a > b) ? a : b;
}
double minR(double a, double b) {
    return (a < b) ? a : b;
}
bool P(double time) {
    double maxLL=-1e18;
    double minRR=1e18;
    for (int i=0;i<n;i++){
    //tinh thoi gian chay  
    double s=(double)v[i]*time;

    double L=a[i]-s;
    double R=a[i]+s;

    maxLL=maxL(maxLL,L);
    minRR=minR(minRR,R);
}
    return maxLL<=minRR;
}
int main() {
    scanf("%d", &n);
    for(int i = 0; i < n; i++) scanf("%d", &a[i]);
    for(int i = 0; i < n; i++) scanf("%d", &v[i]);

    double low=0.0;
    double high=100000000000.0;
    for (int i=0;i<100;i++){
        double mid = low + (high-low)/2;
        if (P(mid) == true)
            high = mid; //tim thu t nho hon
        else
            low = mid; //tim thu t lon hon
    }
    printf("%.7f", high);
    return 0;
}