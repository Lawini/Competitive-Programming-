#include <bits/stdc++.h>
using namespace std;
int max_val(int a, int b){
    return a > b ? a : b;
}
void solve(){

    int m, n, k;
    cin >> m >> n >> k;

    char s[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> s[i][j];
        }
    }


    for (int i = 0; i < m; i++){
            for (int row = 0; row < k; row++){
                for (int j = 0; j < n; j++){
                    for (int col = 1; col <= k; col++){
                        cout << s[i][j];
                }
            }
            cout << endl;
        }
    }

/*
    cach 2
    	#include<bits/stdc++.h>

    using namespace std;

    int main(){
	int n, m, k;
	cin >> n >> m >> k;
	vector<vector<char>> v(n, vector<char>(m));
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> v[i][j];
		}
	}
	for(int i = 0; i < k * n; i++){
		for(int j = 0; j < k * m; j++){
			cout << v[i / k][j / k];
		}
		cout << endl;
	}
}




*/

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


//    freopen("shell.in", "r", stdin);
//    freopen("shell.out", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--){
    solve();
    }



}
