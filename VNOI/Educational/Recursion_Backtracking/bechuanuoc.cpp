#include<bits/stdc++.h>
using namespace std;
#define N 100005
#define ll long long
int n, k;
ll a[25], b[25], L[25], R[25];
int d[25]; //so cot da dat vao them luc sau
ll ans = 0;
void calc(){

    for (int i = 1; i <= n; i++) b[i] = a[i] + d[i];

    L[1] = b[1];
    for(int i = 2; i <= n; i++){
        L[i] = max(L[i - 1], b[i]);
    } 

    R[n] = b[n];
    for (int i = n - 1; i >= 1; i--){
        R[i] = max(R[i + 1], b[i]);
    }


    ll cur = 0;
    for (int i = 1; i <= n; i++){
        cur += max(0LL, min(L[i], R[i]) - b[i]);
    }

    ans = max(ans, cur);

}
//bai toan chia keo euler khi dat k vien keo chia vao n
void back(int i, int rem){
   if (i == n){
    d[i] = rem;
    calc();
    return;
   }

// t dai dien cho vien da dat vao <= rem so vien da con lai sau khi dat
   for (int t = 0; t <= rem; t++){
    d[i] = t; 
    back(i + 1, rem - t);
   }
    
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);


    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }

    back(1, k);

    cout << ans << endl;


}
