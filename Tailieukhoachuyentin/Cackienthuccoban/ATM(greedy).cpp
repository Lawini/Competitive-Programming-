#include<bits/stdc++.h>
using namespace std;
/*
bai toan ATM tim so tien hop le k sao cho cnt min
input
10 390
200 10 20 20 50 50 50 50 100 100
output
5
20 20 50 100 200
*/
int n, s;
int t[101];
vector<int> result;
void quicksort(int t[], int l, int r){

    if (l >= r) return;
    int i = l;
    int j = r;
    int pivot = t[l + (r - l) / 2];


    while(i <= j){
        while(t[i] > pivot) ++i;
        while(t[j] < pivot) --j;

        if (i <= j){
            int temp = t[i];
            t[i] = t[j];
            t[j] = temp;
            ++i;
            --j;
        }
    }
        if (l < j) quicksort(t, l, j);
        if (i < r) quicksort(t, i, r);

}
void output(){
    if (s == 0){
        cout << result.size() << endl;
        for (int i = 0; i < result.size(); i++){
            cout << result[i] << (i == result.size() - 1 ? "" : " ");
        }
    }
    else {
        cout << "Khong the rut them tien vi thieu " << s << " tien" << endl;
    }
}
void greedy(){

    for (int i = 1; i <= n; i++){
        if (t[i] <= s){
            s -= t[i];
            result.push_back(t[i]);
        }
    }
}
int main(){
    cin >> n >> s;
    for (int  i = 1; i <= n; i++) cin >> t[i];

    int l = 1;
    int r = n;
    quicksort(t, l, r);
    greedy();
    output();

    return 0;
}
