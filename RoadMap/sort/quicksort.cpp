#include<bits/stdc++.h>
#define ll long long
#define N 1e5
using namespace std;
void quicksort(int a[], int left, int right){

    ///quicksort
    if (left >= right) return;
    int i = left;
    int j = right;
    int pivot = a[left + rand() % (right - left + 1)];
    while (i <= j){
        while(a[i] < pivot) ++i;
        while (a[j] > pivot) --j;
        // if a[i] < pivot < a[j]
        if (i <= j){
            int tmp = a[i];
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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    

    int n;
    cin >> n;

    int left = 0;
    int right = n - 1;
    vector<int> a(n);
    set<int> s;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        s.insert(a[i]); // luu cac gia tri khac nhau
    }
    quicksort(a.data(), left, right);
    
    int distinct = s.size();
    
    int cnt = 1, maxF = 1;
    for(int i = 1; i < n; i++){
        if (a[i] == a[i - 1]){
            cnt++;
        }
        else {
            cnt = 1;
        }
        if (cnt > maxF){
            maxF = cnt; 
        }
    }
    
    cout << distinct << endl << maxF;
    
}