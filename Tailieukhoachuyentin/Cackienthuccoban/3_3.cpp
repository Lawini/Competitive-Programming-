#include<bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
void quicksort(ull a[], int left, int right){

    ///quicksort
    if (left >= right) return;
    int i = left;
    int j = right;
    ull pivot = a[left + rand() % (right - left + 1)];
    while (i <= j){
        while(a[i] < pivot) ++i;
        while (a[j] > pivot) --j;
        // if a[i] < pivot < a[j]
        if (i <= j){
            ull tmp = a[i];
            a[i] = a[j];
            a[j] = tmp;
            ++i;
            --j;
            }
        }
        //goi de quy de sap xep cac nua
        if (left < j) quicksort(a, left, j);
        if (i < right) quicksort(a, i , right);

    





}
int main(){
    char s[200];
    fgets(s, sizeof s, stdin);
    s[strcspn(s, "\n")] = 0;
    // string s;
    // cin >> s;
    srand(time(NULL)); //dung de quicksort chay nhanh hon
    //Tim so luong xau con(dung hash + sort)
    int n = strlen(s);
    ull hashes[20100]; // N * (N + 1)/2
    int total = 0;

    for (int i = 0; i < n; i++){
        ull h = 0;
        for (int j = i; j < n; j++){
            h = h * 31 + (s[j] - 'a' + 1);
            hashes[total++] = h;
        }
    }

    quicksort(hashes, 0, total - 1);


    int count = 1;
    for (int i = 1; i < total; i++) {
        if (hashes[i] != hashes[i - 1]) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;


    
    




}