/*
Cho so nguyen duong N (N <= 10e9)
a) phan tich N thanh thua so nguyen to
b) Dem so uoc cua N
c) Tinh tong cac uoc cua N
*/

#include <bits/stdc++.h>
#define N 1e9
#define ll long long
using namespace std;
void solve(){
    ll n;
    cin >> n;

    ll sum = 1;
    ll cnt_uoc = 1;
    bool first = true;
// a)
    for (int i = 2; i * i <= n; i++){
        if (n % i == 0){
            int exponent = 0;
            ll p_pow = 1;
            while(n % i == 0){
                exponent++;
                n /= i;
                p_pow *= i;
            }
            if (!first) cout << " * ";
            cout << i << "^" << exponent;
            first = false;


            cnt_uoc *= (exponent + 1);

            // c) Tính tổng ước: S = S * (p^(a+1) - 1) / (p - 1)
            sum *= (p_pow * i - 1) / (i - 1);
        }
    }


    if (n > 1) {
        cout << " * ";
        cout << n << "^ 1";
        cnt_uoc *= 2;
        sum *= (n * n - 1) / (n - 1); 
    }
    cout << endl;

    cout << "So luong uoc: " << cnt_uoc << endl;
    cout << "Tong cac uoc: " << sum<< endl;
    }



    // c) tong cua cac uoc so
    /*
    
    F = (a ^ (i + 1) - 1) / (a -  1) * (b ^ (j + 1) - 1) / (b -  1) *  .... * (c ^ (k + 1) - 1) / (c -  1)

*/
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;
    while(t--){
        solve();
    }
    return 0;



}
