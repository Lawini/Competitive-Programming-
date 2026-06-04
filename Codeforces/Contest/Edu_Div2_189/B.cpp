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
bool check(string s, string t) {
    int n = s.length();
    int L = -1, R = -1;


    for (int i = 0; i < n; i++) {
        if (s[i] != t[i]) {
            if (L == -1) L = i;
            R = i;
        }
    }

    if (L == -1) return true;

    string sub = s.substr(L, R - L + 1);
    string target_sub = t.substr(L, R - L + 1);


    //Case 1
    string rev = sub;
    reverse(rev.begin(), rev.end());
    if (rev == target_sub) return true;

    //Case 2
    string inv_rev = sub;
    for (char &c : inv_rev) {
        c = (c == 'a' ? 'b' : 'a');
    }
    reverse(inv_rev.begin(), inv_rev.end());
    if (inv_rev == target_sub) return true;

    return false;
}

void solve() {
    string s;
    cin >> s;
    int n = s.length();

    string t1 = "", t2 = "";
    for (int i = 0; i < n; i++) {
        t1 += (i % 2 == 0 ? 'a' : 'b');
        t2 += (i % 2 == 0 ? 'b' : 'a');
    }

    if (check(s, t1) || check(s, t2)) {
        cout << "YES" << endl;
    } 
    else {
        cout << "NO" << endl;
    }
}
int main(){
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
}