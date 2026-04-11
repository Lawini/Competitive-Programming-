#include<bits/stdc++.h>
using namespace std;
int max_val(int a, int b){
    return a > b ? a : b;
}
void solve(){
    int n;
    cin >> n;
    vector <int> v(n + 1);
    vector <int> mark(n + 1);
    for (int i = 1; i <= n; i++){
        cin >> v[i];
        mark[i] = 0;
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++){
        if (mark[i] == 0){
            mark[v[i]] = 1;
            cnt++;
        }
        mark[v[i]] = 1;
    }

    cout << cnt << endl;



}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }

}
