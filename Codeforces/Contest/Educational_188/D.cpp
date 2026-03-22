#include <bits/stdc++.h>
#include<limits.h>
#include<stdio.h>
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