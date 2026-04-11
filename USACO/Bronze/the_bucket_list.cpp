#include <bits/stdc++.h>
using namespace std;

int max_val(int a, int b){
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
void quicksort(int a[], int left, int right){

    if (left >= right) return;
    int i = left;
    int j = right;

    int pivot = a[left + rand() % (right - left + 1)];
    while(i <= j){
        while(a[i] < pivot) ++i;
        while(a[j] > pivot) ++j;

        if (i <= j){
            int tmp = a[i];
            a[i] = a[j];
            a[j] = a[i];
            ++i;
            ++j;
        }
    }
    if (left < j) quicksort(a, left, j);
    if (i < right) quicksort(a, i, right);




}
typedef struct{
    int start;
    int ends;
    int buckets;


}cows;
void solve(){

    int n;
    cin >> n;

//    vector<int> start(n);
//    vector<int> ends(n);
//    vector<int> buckets(n);
//
    cows v[n];
    for (int i = 0; i < n; i++){
        cin >> v[i].start >> v[i].ends >> v[i].buckets;
    }

    int max_buckets = 0;
    //trai mang (ktra tung giay)
    for (int t = 1; t <= 1000; t++){
        int buckets_this_time = 0;
        for (int i = 0; i < n; i++){
            if (t >= v[i].start && t <= v[i].ends){
                buckets_this_time += v[i].buckets;
            }
        }
        if (buckets_this_time > max_buckets){
            max_buckets = buckets_this_time;
        }
    }

    cout << max_buckets << endl;

}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


//    freopen("shell.in", "r", stdin);
//    freopen("shell.out", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--){
    solve();
    }



}
