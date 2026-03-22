#include <stdio.h>
#include<stdlib.h>
int N;
int cot[100];
int cheo_xuoi[200];
int cheo_nguoc[200];
int a[100];  //luu ket qua

int count=0;
void inketqua(){
    count++;
    printf("Giai phap %d: ",count);
    for (int i=1; i <= N; i++){
        printf("%d ",a[i]);
    }
    printf("\n");
}

//backtracking(ham quay lui)
void test(int hang){
    for(int c=1; c<=N ;c++){

        //kiem tra xem lua chon hang (hang,c) co an toan de dat khong
        if (cot[c]==0 && cheo_xuoi[hang-c+N]==0 && cheo_nguoc[hang+c]==0){
            a[hang]=c;
            cot[c]=1;
            cheo_xuoi[hang-c+N]=1;
            cheo_nguoc[hang+c]=1;

            if (hang==N){
                inketqua();
            }
            else {
                test(hang+1);
            }

            //hoan tac nhac hau ra ngoai ne(backtracking)
            cot[c]=0;
            cheo_xuoi[hang-c+N]=0;
            cheo_nguoc[hang+c]=0;
            }
    }
}
    int main(){
        printf("Nhap N= ");
        scanf("%d",&N);

        for (int i=0;i<100;i++) cot[i]=0;
        for (int i=0;i<200;i++) cheo_xuoi[i]=0;
        for (int i=0;i<200;i++) cheo_nguoc[i]=0;

        test(1);
        if (count==0) printf("Khong co giai phap nao");
        return 0;
    }