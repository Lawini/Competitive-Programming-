#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define ll long long
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
int n;
ll m;
ll a[15];
ll ans;

//ham chia modulo khong bi sai cho so am va so duong (vi so am khong chia du dc (khong % dc))
ll safeMode(ll x, ll mod){
    return (x % mod + mod) % mod;
}
void back(int i, long long cur_s, long long last){
    if (i > n){
        //modulo rat qtrong (A + B) % m = (A % m + B % m) % m
        if (safeMode(cur_s , m) == 0) ans++;
        return;
    }

    // +
    back(i + 1, safeMode(cur_s + a[i], m), safeMode(a[i], m));

    // -
    back(i + 1, safeMode(cur_s - a[i], m), safeMode(-a[i], m));

    // *
    ll new_last = safeMode(last * a[i], m);
    ll new_sum = safeMode((cur_s - last + new_last), m);
    back(i + 1, new_sum, new_last);
}
void solve(){
    cin >> n >> m;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        safeMode(a[i],m);
    }

    ans = 0;
 
    back(2, safeMode(a[1], m), a[1] % m);
    cout << ans << endl;

}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

/*
c2
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
ll cnt, a[11], dau[11];

void load(){
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) cin >> a[i];
}

void ADD(){
    stack<pair<int, int>> s; s.push({dau[1], a[1]});

    for(int i = 2; i <= n; ++i)
        if(dau[i] == 2){
            pair<int, int> num = s.top(); s.pop();
            num.second = 1ll * num.second * a[i] % m;
            s.push(num);
        }
        else s.push({dau[i], a[i]});

    long long re = 0;
    while(!s.empty()){
        re += s.top().first == 0 ? s.top().second : -s.top().second;
        re %= m;

        s.pop();
    }
    if(!re) ++cnt;
}

void backtrack(int i){
    if(i == n) ADD();
    else{
        for(int j = 0; j < 3; ++j){
            dau[i + 1] = j;
            backtrack(i + 1);
        }
    }
}

void solve(){
    cnt = 0;
    backtrack(1);
    cout << cnt << "\n";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);

    int tc; cin >> tc;
    while(tc--) load(), solve();


    return 0;
}
*/
