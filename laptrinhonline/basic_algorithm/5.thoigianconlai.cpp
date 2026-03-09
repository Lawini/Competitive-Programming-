#include <stdio.h>
#include <math.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int tong=(a+b)%24;
    
    printf("%d",tong);
    return 0;
}
