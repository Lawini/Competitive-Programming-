#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define ll long long
#define pb push_back
#define fi first
#define se second
#define ALL(x) x.begin(), x.end()

//CODE
ll n, m;
string s[15];
int c[15];
ll ans = 0;
char res[40]; //Mang luu day nhi phan
bool isValid(){
    for (int i = 1; i < m; i++){
        int match = 0;
        for (int j = 0; j < n; j++){
            if (res[j] == s[i][j]) match++;
        }
        if (match != c[i])
        return false;
    }
    return true;
}
void back(int pos, int cur){
   if (cur > c[0]){
    return;
   }
   if (cur + (n - pos) < c[0]){
    return;
   }

   if (pos == n){
        if(isValid()){
            // for (int j = 0; j < n; j++) cout << res[j] << " ";
            // cout << endl;
            ans++;
        } 
        return;
   }


    res[pos] = s[0][pos];
    back(pos + 1, cur + 1);

    res[pos] = (s[0][pos] == '0' ? '1' : '0');
    back(pos + 1, cur);


    
}
void solve(){
    cin >> n >> m;


    int min_idx = 0;
    for (int i = 0; i < m; i++){
        cin >> s[i] >> c[i];

        if (c[i] < c[min_idx]) min_idx = i;
    }

    swap(s[0], s[min_idx]);
    swap(c[0], c[min_idx]);
    
    back(0, 0);
    
    cout << ans << endl;
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}