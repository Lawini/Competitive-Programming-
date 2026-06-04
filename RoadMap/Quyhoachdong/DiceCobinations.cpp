#include<bits/stdc++.h>
using namespace std;
const int maxn = 1e6 + 5;
const int MOD = 1e9 + 7;
int f[maxn]; //so cach tung xuc xac ra duoc tong bang i
int main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	f[0] = 1;
	for (int i = 1; i <= n; i++){
		for (int j = 1; j <= 6; j++){
			if(j <= i){
                //Tim so cach tao ra cac tong nho nhat
                //vi du f[1] = f[1] + f[1 - 0]
				f[i] = (f[i] + f[i - j]) % MOD;
			}
		}
	}
	cout << f[n];


}
