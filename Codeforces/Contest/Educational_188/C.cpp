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
    ll a, b, c;
    ll m;
    cin >> a >> b >> c >> m;

    ll alice = 0;
    ll bob = 0;
    ll carol = 0;

    ll ab = m / lcm (a, b);
    ll ac = m / lcm(a, c);
    ll bc = m / lcm (b, c);
    ll abc = m / (lcm (lcm(a, b), c));


    alice = 6 * (m / a) - 3 * ab - 3 * ac + 2 * abc;
    bob = 6 * (m / b) - 3 * ab - 3 * bc + 2 * abc;
    carol = 6 * (m / c) - 3 * ac - 3 * bc + 2 * abc;

    cout << alice <<" " << bob << " " << carol << endl;

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