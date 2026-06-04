#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAXN 1000006
#define ll long long

int n;
ll a[MAXN], b[MAXN];
void solve(){
	
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	
	ll k = 0;
	for (int i = 0; i < n - 1; i++){
		if (a[i] > a[i + 1]){
			k = max(k, a[i] - a[i + 1]);
		}
	}
	
	ll prev = a[0];
	int p  = 1;
	for(int i = 1; i < n; i++){
		if(a[i] >= prev){
			prev = a[i];
		}
		else if (a[i] + k >= prev){
			prev = a[i] + k;
		}
		else if (a[i] + k < prev){
			p = 0;
			break;
		}
	}
	if (!p) printf("NO\n");
	else{
		printf("YES\n");
	}	
	
}	
int main(){
	
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
}
