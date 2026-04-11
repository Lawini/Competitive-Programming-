#include <bits/stdc++.h>
#define N 1000005
using namespace std;

int max_val(int a, int b){
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
bool check(int mid, int r[], int *b , int *c, int d){
    // reset cur = 0;
    *c = 0;

    //tinh vong lap xem minimize bang bnh
    for (int i = 0; i < d; i++){
        if ((i + 1) < mid){
            *c += r[i] * (d - (mid - (i + 1)));
        }
        else {
            *c += r[i] * ((i + 1) - mid);
        }
    }

    if (*c  <= *b){
        *b = *c;
        return true;
    }
    else{
        return false;
    }




}
void solve(){
    int n;
    cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; i++){
        cin >> r[i];
    }

    int R = n;
    int L = 0;
    int ans = 0;
    int minimize = 99999999999;
    int cur;
    while (L <= R){

        int mid = L + (R - L) / 2;

        if (check(mid, r.data(), &minimize, &cur, n)){
            ans = mid;
            L++;
        }
        else{
            R--;
        }
    }

    cout << minimize << endl;

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
