#include<stdio.h>
#define N 100005
int a[N];
int temp[N];


void merge(int l, int mid, int r){
    int i = l;          //con tro cho nua  trai
    int j = mid + 1;    //con tro cho nua phai
    int k = l;          //con tro cho mang phu


    //so sanh va nhat phan tu be hon vao temp
    while(i <= mid && j <= r){
        if(a[i] < a[j]){
           temp[k] = a[i];
           i++;
        }
        else{
            temp[k] = a[j];
            j++;
        }
        k++;
    }

    //nhat not cac phan tu con lai
    while (i <= mid){
        temp[k] = a[i];
        i++; k++;
    }

    while (j <= r){
        temp[k] = a[j];
        j++; k++;
    }

    //chep nguoc tu temo ve a
    for (int p = l; p <= r; p++){
        a[p] = temp[p];
    }



}
void mergesort(int l , int r){
    if(l >= r) return;
    
    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge (l, mid, r);
}
int main(){
    int n;
    scanf("%d",&n);

    for (int i = 0; i < n;i++){
        scanf("%d", &a[i]);
    }

    //goi ham sort
    mergesort(0, n - 1);


    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    



}