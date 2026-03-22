#include <bits/stdc++.h>
#include<limits.h>
#include<stdio.h>
#include<string.h>
#define N 1000005
using namespace std;
#define ll long long
int a[N];
int max_val(int a, int b){
    return a > b ? a : b;
}
ll gcd(ll a, ll b){
    if (b == 0) return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return a / gcd(a, b) * b;
}
void solve(){

    int n;
    cin >> n;
    
    vector<int> a(n + 1), b(n + 1);

    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) cin >> b[i];


    int i = n;
    int j = n;
    int count = 0; // count so nguoi da khong online

    while(i >= 1 && j >= 1){
        if (b[i] == a[j]){
            count++;
            i--;
            j--;
        }
        else {
            j--;
        }
    }
    cout << n - count << endl;









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