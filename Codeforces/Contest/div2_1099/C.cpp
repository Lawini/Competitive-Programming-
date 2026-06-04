#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAXN 200006
#define ll long long
#define fi first
#define se second
int n;
int cnt_freq[MAXN];
ll total[MAXN];
int check[MAXN];
void solve(){

	cin >> n;

	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];

	vector<pair<int, int>> all_visits;
    for (int i = 0; i < n; i++){
        int cur = a[i];
        int steps = 0;


        vector<int> path;

        while(true){

            bool is_cycle = false;
            for (int x : path) {
                if (x == cur) {
                    is_cycle = true;
                    break;
                }
            }
            if (is_cycle) break;

            path.push_back(cur);
            all_visits.push_back({cur, steps});

            if (cur % 2 == 0) cur /= 2;
            else cur += 1;

            steps++;
        }
    }
    sort(all_visits.begin(), all_visits.end());

    ll ans = 1e18;

    int cur_node = -1;
    int count = 0;
    ll total = 0;


    for (int i = 0; i < (int)all_visits.size(); i++){
        if (all_visits[i].first != cur_node) {

            if (count == n) {
                ans = min(ans, total);
            }

            cur_node = all_visits[i].fi;
            count = 1;
            total = all_visits[i].se;
        }
        else {

            count++;
            total += all_visits[i].se;
        }
    }

    if (count == n) {
        ans = min(ans, total);
    }
        cout << ans << "\n";
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
