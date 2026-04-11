#include<bits/stdc++.h>
using namespace std;
// cho 1 day so gom n phan tu a[i], hay tim cach chia nhieu nhat k doan
//sao cho tong lon nhat cua doan phai la nho nhat co the
bool check(int n, int k, int a[], long long mid){
        int sum = 0;
        int cnt  = 1;
        for (int i = 0; i < n; i++){
            if (sum + a[i] < mid){
             sum += a[i];
            }
            else {
                cnt++;
                sum = a[i];
                if (sum > mid) return false;
            }
        }
        return cnt <= k;
}
void solve(){

    int n, k;
    cin >> n >> k;

    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    long long L = 0;
    long long R = 1e11;
    long long ans = 0;
    while(L <= R){
        int mid = L + (R - L) / 2;

        if(check(n, k, a, mid)){
            mid = ans;
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
