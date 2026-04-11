#include<bits/stdc++.h>
using namespace std;
//co n may in may in thu i thi ton a[i] tgian de in ra 1 to giay, hoi mat it bao lau de co the in ra k to giay
bool check(int n, int k, int a[], long long mid){
    long long cnt = 0;
    for (int i  = 0; i < n; i++){
        cnt += mid / a[i];
        if(cnt >= k){
            return true;
        }
    }
    return cnt >= k;

}
void solve(){

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long L = 0;
    long long R = 100000;
    long long ans = 0;
    while(L <= R){
        int mid = L + (R - L) / 2;

        if(check(n, k, a, mid)){
            ans = mid;
            R = mid - 1;
        }
        else{
            L = mid + 1;
        }
    }

    cout << ans;





}
int main(){
    int t = 1;
//    cin >> t;
    while(t--){
    solve();
    }

}
