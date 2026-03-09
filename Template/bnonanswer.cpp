#include <stdio.h>
    int n; 
    int h;
    int a[10000];
int check(int k) {
    if (k == 0) return 0;
    long long hours=0;
    for (int i=0;i<n;i++){
        hours+=(a[i]+k-1)/k;
    }
    return(hours <= h); 
}
int main() {
    scanf("%d",&n);
    scanf("%d",&h);
  
    for(int i=0; i<n; i++) scanf("%d",&a[i]);

 
    int low = 1; 
    int high = 1000000000; 

    while (low < high) {
       int mid=low+(high-low)/2;
       if (check(mid)){
        high=mid;
       }
       else {
        low=mid+1;
       }
    }
    printf("Toc do an nho nhat la: %d", low);
    return 0;
}