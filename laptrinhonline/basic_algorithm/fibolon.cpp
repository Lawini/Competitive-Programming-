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
#include<bits/stdc++.h>
using namespace std;

string add(string a, string b){
    string res = "";
    int carry = 0;

    while(a.size() < b.size()) a = "0" + a;
    while(b.size() < a.size()) b = "0" + b;

    for(int i = a.size()-1; i >= 0; i--){
        int sum = (a[i] - '0') + (b[i] - '0') + carry;
        res = char(sum % 10 + '0') + res;
        carry = sum / 10;
    }

    if(carry) res = "1" + res;
    return res;
}
void solve(){
    int n; cin >> n;

    string a = "0", b = "1";

    for(int i = 2; i <= n; i++){
        string c = add(a, b);
        a = b;
        b = c;
    }

    if(n == 0) cout << "0";
    else cout << b;
}
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }

}