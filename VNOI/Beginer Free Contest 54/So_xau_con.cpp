#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define N 100005
#define ll long long
#define fi first
#define se second

int n;
string S, T;

//Slide window
void solve(){

    cin >> S >> T;
    int l1 = S.length();
    int l2 = T.length();

    vector<int> cnt_T(26, 0);
    vector<int> cnt_S(26,0);

    for (int i = 0; i < l2; i++){
        cnt_T[T[i] - 'a']++;
        cnt_S[S[i] - 'a']++;
    }

    int ans = 0;
    if (cnt_T == cnt_S)
        ans++;

    for (int i = l2; i < l1; i++){
        cnt_S[S[i] - 'a']++;

        //Vut bo ki tu i - m ky tu cu ra ngoai
        cnt_S[S[i - l2] - 'a']--;
        if (cnt_S == cnt_T){
            ans++;
        }
    }

    cout << ans << endl;

}
int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
}

