#include <bits/stdc++.h>
using namespace std;
int max_val(int a, int b){
    return a > b ? a : b;
}
void solve(){

    int n;
    cin >> n;

    vector <int> pos(3);
    for (int i = 0; i < 3; i++) pos[i] = i;

    vector<int> counter(3);
    for (int i = 0; i < n; i++){
        int a, b, g;
        cin >> a >> b >>g;

        a--; b--; g--;
        swap(pos[a], pos[b]);

        counter[pos[g]]++;

    }




    cout << max_val(counter[0], max_val(counter[1], counter[2])) << endl;






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
