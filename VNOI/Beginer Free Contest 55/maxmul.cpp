#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define REP(i, a, b) for(int (i)=(a); (i)<(b); i++)
#define REPD(i, a, b) for(int (i)=(a); (i)>(b); i--)
#define N1 100005 + 5
#define ll long long
#define fi first
#define se second
#define ull unsigned long long

const int N = 1e5 + 5;
const ll MOD = 1e9 + 7;
ll a[N];
ll pre[N];
ll power(ll base, ll exp){
	ll res = 1;
	base %= MOD;
	
	while(exp > 0){
		if(exp % 2 == 1) res = (res * base) % MOD;
		
		base = (base * base) % MOD;
		exp /= 2;
		
	}
	return res;
	
}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

	int n;
    cin >> n;
    
    for (int i = 1; i <= n; i++){
    	cin >> a[i];
	}
	
	pre[0] = 1;
	pre[1] = a[1];
	for (int i = 2; i <= n; i++){
		pre[i] = (pre[i - 1] * a[i]) % MOD; 
	}

    ll t;
    cin >> t;
    while(t--){
    	ll u, k;
    	cin >> u >> k;
    	//cout << ((pre[u + (k - 1)] % MOD) / (pre[u - 1] % MOD)) % MOD << endl;
    	
    	ll A = pre[u + (k - 1)];
    	ll B_inverse = power(pre[u - 1], MOD - 2);
    	cout << (A * B_inverse) % MOD << endl;
    	
    }
}

