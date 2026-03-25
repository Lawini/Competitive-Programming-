#include <bits/stdc++.h>
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

    vector<int> shuff(n + 1);
    vector<string> id(n + 1);
    vector<string> names(n + 1);
    int k = 3;
    for (int i = 0; i < n; i++){
        cin >> shuff[i];
    }

    for (int i = 0; i < n; i++){
        cin >> id[i];
    }
    while(k--){
        for (int i = 0; i < n; i++){
            names[i] = id[shuff[i] - 1];
        }
        for (int i = 0; i < n; i++){
            id[i] = names[i];
        }
    }
    for (int i = 0 ; i < n; i++){
        cout << names[i] << endl;
    }


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
