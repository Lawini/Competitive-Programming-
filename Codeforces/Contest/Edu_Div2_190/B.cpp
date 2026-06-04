#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define MAXN 300005 + 5
#define ll long long
#define ull unsigned long long
char s[MAXN];
void solve(){
    cin >> s;


    //Khong duoc chu so 1 nao dung truoc so 2
    //Khong duoc chu so 3 nao dung truoc so 2
    int ans_4 = 0;
    int total_2 =0;


    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '4') ans_4++;
        else if(s[i] == '2') total_2++;
    }

    int before_13 = 0;
    int after_2 = total_2;
    int min_del = after_2;

    for (int i = 0; s[i] != '\0'; i++){
        if (s[i] == '4'){
            continue;
        }

        if(s[i] == '2'){
            after_2--;
        }
        else{
            before_13++;
        }



        min_del = min (min_del, before_13 + after_2);
    }

    cout << ans_4 + min_del << endl;

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
