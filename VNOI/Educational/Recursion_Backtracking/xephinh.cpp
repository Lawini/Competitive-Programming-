#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define ll long long
#define pb push_back
#define fi first
#define se second




//CODE
ll n;
string s;
int cnt[10], dc[1500][10]; 
vector<ll> d, res;
void get_dc(ll x, int a[]){
    if (!x) {
        a[0]++;
        return;
    }
    while(x){
        a[x % 10]++;
        x /= 10;
    }
}
bool solve(ll cur, int idx){

    if (cur == 1){
        for (int i = 0; i < 10; i++){
            if (i != 1 && cnt[i]){
                return false;
            }
        }
        //con lai toan 1 thi push het vao
        while(cnt[1]--) res.push_back(1);
        return true;
    }


    //
    for (int i = idx; i < d.size(); i++){
        if(cur % d[i] == 0){
            bool ok = 1;
            for (int j = 0; j < 10; j++){
                if(cnt[j] < dc[i][j]) {
                    ok = 0; 
                    break;
                }
            }
            if(ok){
                for (int j = 0; j < 10; j++){
                    cnt[j] -= dc[i][j];
                }
                    res.push_back(d[i]);
                    if (solve(cur / d[i], i)) return 1;
                    //Quay lui
                    res.pop_back();
                    for (int j  = 0; j < 10; j++){
                        cnt[j] += dc[i][j];
                    }
            }

        }

    }

    return 0;

}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> s;
   for (char c : s){   
        cnt[c - '0']++;
    } 

    //buoc 1 tim tat ca uoc co san cua n
    for (ll i = 2; i * i <= n; i++){
        if (n % i == 0){
            d.push_back(i);
            if(i * i != n) d.push_back(n / i); 
        }
    }

    d.push_back(n);
    //sort cac uoc de tranh hoan vi lap
    sort(d.begin(), d.end());
    

    for (int i = 0; i < d.size(); i++){
        get_dc(d[i], dc[i]);
    }
    if (solve(n , 0)){
        cout << res.size() << " ";
        for (int i = 0; i < res.size(); i++){
            cout << res[i] << (i == res.size() - 1 ? "" : " ");
        }
    }

}
