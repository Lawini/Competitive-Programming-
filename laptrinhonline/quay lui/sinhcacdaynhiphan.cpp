#include<stdio.h>
#include<math.h>
    int N;
    int a[100];

void result(){
    for (int i=1;i<=N;i++){
        printf("%d",a[i]);
    }
    printf("\n");
}
void test (int slot){
    if (slot==N+1){
        result();
        return;
    }
    
    a[slot]=0;
    test(slot+1);

    a[slot]=1;
    test(slot+1);


}
int main(){
    //printf("Nhap N =");
    scanf("%d",&N);

    test(1);
}