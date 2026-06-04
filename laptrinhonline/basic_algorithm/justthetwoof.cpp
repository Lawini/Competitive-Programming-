#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define endl "\n"
#define ALL(x) x.begin(), x.end()
#define TIME  (1.0 * clock() / CLOCKS_PER_SEC)



//CODE
int n;
char res[20];
int used[20];
void back_2(int k){  
    if (k == 2 * n){
        for (int i = 0; i < 2 * n; i++){
            cout << res[i];
        }
        cout << endl;
        return;
    }  
    for (int i = 1 ; i <= n; i++){
        res[k] = i + '0';
        back_2(k + 1);
    }
}
void back_1(int k){
    if (k == n){
        back_2(n);
        return;
    }
    for (int i = 0; i < n; i++){
        if (!used[i]){
            res[k] = i + 'A';
            used[i] = 1;
            
            back_1(k + 1);
            used[i] = 0;
        }
    }
}   
void solve(){
    cin >> n;
    
    for (int i = 0; i < 10; i++){
        used[i] = 0;
    }

    back_1(0);
}   
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}