#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
//
ull f[100];
ull fibo(){

	f[0] = f[1] = 1;
    for (int i = 2; i <= 92; i++){
    	f[i] = f[i - 2] + f[i - 1];
	}
}
void solve(){
    int n; 
    cin >> n;
    
    
	cout << f[n] << endl;
}
int main(){
    

    ios_base::sync_with_stdio(NULL);
    cin.tie(0); cout.tie(0);
	
	
	fibo();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
