#include<bits/stdc++.h>
using namespace std;

#define N 1e9
#define pb pushback
#define fi first
#define se second
#define ll long long
void solve(){
	ll n, k;
	cin >> n >> k;
	
	ll res = 1; // 3^m
	for (int m = 0; m <= 20; m++){
		if (n % res == 0){
			ll p = n / res;
			if (p <= k){
				ll C;
				if (m == 0) C = 3;
				else {
					C = 3 * res + (m * res) / 3;
				}
			
			cout << p * C << endl;
			return;
			}
		}
		if (res > n) break;
		res *= 3;
	}
	
	cout << "-1" << endl;
	
	
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	scanf("%d", &t);
	while(t--){
		solve();
	}
}

