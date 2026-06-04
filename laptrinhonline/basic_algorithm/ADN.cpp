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
#define N 1e9
//CODE
int n;
string s1;
string s2;
char s[50];
int cnt = 0;
void count(int k){
    if (k == n){
        cnt++;
        return;
    }

    count(k + 1);
    if (s1[k] != s2[k]){
        count(k + 1);
    }      
}
void back(int k){
    if (k == n){
        for (int i = 0; i < n; i++){
            cout << s[i];
        }
        cout << endl;
        return;
    }

    char c1 = s1[k];
    char c2 = s2[k];

    if (c1 == c2) {
        s[k] = c1;
        back(k + 1);
    } else {
        char nho = min(c1, c2);
        char lon = max(c1, c2);

        s[k] = nho;
        back(k + 1);

        s[k] = lon;
        back(k + 1);
    }    
}
void solve(){
    cin >> n;
    cin >> s1 >> s2;

    count(0);
    cout << cnt << endl;
    back(0);
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