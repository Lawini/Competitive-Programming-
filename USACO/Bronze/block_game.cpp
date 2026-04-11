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

    vector<vector<string>> s(n, vector<string>(2));

    for (int i = 0; i < n; i++){
        cin >> s[i][0] >> s[i][1];
    }
    for (int i= 0; i < n; i++){
        cout << s[i][0] << " " << s[i][1] << endl;
    }


    
//    int pos = pow(2, n);
//    //Xau sau khi ghep
//    vector <string> s(pos);



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
