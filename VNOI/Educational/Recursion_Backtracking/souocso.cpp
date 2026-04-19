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
ll n, max_div;
int primes[] = {2, 3, 5, 7, 11, 13, 17 ,19 ,23, 29, 31, 37, 41, 43, 47};
void back(int id, ll cur, ll d, int limit){

    max_div = max(max_div, d);
    
    if (id == 15) return;

    for (int e = 1; e <= limit; e++){

        if (cur > n / primes[id]) break;
        cur *= primes[id];
        
        
        back(id + 1, cur, d * (e + 1), e);
    }
}
void solve(){
    cin >> n;
    max_div = 1;
    back(0, 1, 1, 60);

    cout << max_div << endl;
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
(1, d=1)
│
├── 2^1 → (2, d=2)
│   │
│   ├── 3^1 → (6, d=4)
│   │   │
│   │   └── 5^1 → (30 ❌ >20) STOP
│   │
│   ├── 3^2 → (18, d=6)
│   │   │
│   │   └── 5^1 → (90 ❌) STOP
│   │
│   └── 3^3 → (54 ❌) STOP
│
├── 2^2 → (4, d=3)
│   │
│   ├── 3^1 → (12, d=6)
│   │   │
│   │   └── 5^1 → (60 ❌) STOP
│   │
│   ├── 3^2 → (36 ❌) STOP
│   │
│   └── ...
│
├── 2^3 → (8, d=4)
│   │
│   ├── 3^1 → (24 ❌) STOP
│   │
│   └── ...
│
├── 2^4 → (16, d=5)
│   │
│   ├── 3^1 → (48 ❌) STOP
│   │
│   └── ...
│
└── 2^5 → (32 ❌) STOP

*/