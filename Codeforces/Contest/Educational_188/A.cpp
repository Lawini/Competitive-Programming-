#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    string s;
    cin >> n >> s;

    set<int> touched;
    int current = 1;
    touched.insert(current); // == visited[current] = 1 trong C 

    for (int i = 0; i < n; i++){
        if (s[current - 1] == 'R'){  // s[0] = 1 s[1] = 2
            current++;
        }
 
        else {
            current--;
        }
        touched.insert(current);
    }

    cout << touched.size() << endl;


}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}