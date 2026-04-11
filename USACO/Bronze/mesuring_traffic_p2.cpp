#include <bits/stdc++.h>
#define N 1000005
using namespace std;

int max_val(int a, int b){
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;
}
void solve(){
    int n;
    cin >> n;

    vector<int> r(n);
    for (int i = 0; i < n; i++){
        cin >> r[i];
    }

    int minimize = 9999;
    for (int  i = 0; i < n; i++){
        int cur = 0;
        for (int j = 0; j < n; j++){
            if ((i + 1) > (j + 1)){
                cur += r[j] * (n - (i + 1 - (j + 1)));
                }
            else {
              cur += r[j] * (j + 1 - (i + 1));
                }
        }
        if (cur < minimize){
           minimize = cur;
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
