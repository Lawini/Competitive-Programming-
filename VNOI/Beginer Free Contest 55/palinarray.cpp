#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define REP(i, a, b) for(int (i)=(a); (i)<(b); i++)
#define REPD(i, a, b) for(int (i)=(a); (i)>(b); i--)
#define N 100005 + 5
#define ll long long
#define fi first
#define se second
#define ull unsigned long long

void solve(){
	
	int n;
	cin >> n;
	vector <int> left(n + 1, -1);
	
	int found = 0;
	FOR(i, 0, n - 1){
		int val;
		cin >> val;
		
		if (found) continue;
		if (left[val] == -1){
			left[val] = i;
		}
		else {
			if(i - left[val] >= 2){
				found = 1;
			}
		}
	}
	
	if (found) cout << "YES" << endl;
	else cout << "NO" << endl;
	

	
	
}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	
	int t;
	cin >> t;
	while(t--){
		solve();
	}
	
}

