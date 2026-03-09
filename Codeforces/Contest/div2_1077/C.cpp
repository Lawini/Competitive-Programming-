#include<stdio.h>
#include<math.h>
#include<string.h>
#define N 100005
long long a[N];
long long temp[N];
void merge(int l, int mid, int r){
    int i = l;
    int j = mid + 1;
    int k = l;

    while (i <= mid && j <= r){
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

    while(i <= mid){
        temp[k] = a[i];
        i++; k++;
    }
    while(j <= r){
        temp[k] = a[j];
        j++; k++; 
    }

    for (int p = l; p <= r; p++){
        a[p] = temp[p];
    }

}
void mergesort(int l, int r){
    if (l >= r) return;

    int mid = (l + r) / 2;
    mergesort(l, mid);
    mergesort(mid + 1, r);
    merge(l, mid, r);

}
void solve(){   
    
    




}
int main(){
    int t;
    scanf("%d", &t);

    while (t--){
        solve();
    }
}