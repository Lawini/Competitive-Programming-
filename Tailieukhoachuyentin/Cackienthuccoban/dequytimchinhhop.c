#include<stdio.h>
int k, n;
int combine(int k, int n){

   if (k == 0 || k == n){
    return 1;
   }
   else {
    return(combine(k - 1, n - 1) + combine(k, n - 1));
   }

}
int main(){

    scanf("%d%d",&k ,&n);
    printf("%dC%d = %d",n, k, combine(k, n));

}
