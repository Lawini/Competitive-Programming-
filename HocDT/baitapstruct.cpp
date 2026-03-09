#include<stdio.h>
typedef struct{
char msv[10];
char ht[20];
double TB;
}sinhvien;


int main(){
    int n;
    printf("Nhap so luong sinh vien ");
    scanf("%d",&n);
    getchar();
    sinhvien sv[n];
    sinhvien temp;


    for (int i=0;i<n;i++){
        printf("Nhap thong tin sinh vien %d ",i+1);
        printf("\nNhap hoten "); fflush(stdin); gets(sv[i].ht);
        printf("Nhap MSV "); fflush(stdin);     gets(sv[i].msv);
        printf("Nhap Diem TB "); scanf("%lf",&sv[i].TB);
    }
    int id;
    for (int i=0;i<n-1;i++){
        id=i;
        for (int j=i+1;j<n;j++){
            if (sv[j].TB>sv[id].TB){
                id=j;
            }
        }
        temp=sv[i];
        sv[i]=sv[id];
        sv[id]=temp;
    }
    printf("\nDach sach hoc sinh co diem cao nhat la\n");
    printf("%-25s %-15s %10s\n","Ho ten","MSV","Diem TB");
    for (int i=0;i<3;i++){
        printf("%-25s %-15s %10.2lf\n",sv[i].ht,sv[i].msv,sv[i].TB);
    }




}
