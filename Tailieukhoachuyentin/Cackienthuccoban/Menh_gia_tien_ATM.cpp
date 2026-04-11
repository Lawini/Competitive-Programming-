#include<bits/stdc++.h>
using namespace std;
/*
bai toan ATM tim so tien hop le k sao cho cnt min
input
10 390
200 10 20 20 50 50 50 50 100 100
output
5
20 20 50 100 200
*/
int n;
long long s;
int x[50], xbest[50];
long long t[50], tmax[50];
int cbest = 1e9;
long long cur_sum = 0;
int cur_cnt = 0;
void output(){
    if (cbest == 1e9){
        cout << "-1";
    }
    else{
    cout << cbest << endl;
    for (int i = n - 1; i >= 1; i--){
            if (xbest[i] == 1){
                cout << t[i] << " ";
            }
        }
    }
}
void backtrack(int i){

    //nhanh can 1
    if (cur_cnt >= cbest) return;

    //nhanh can 2: gia su so tien hien tai  + so to con lai * menh gia cao nhat ma van nho hon thi return luon
    if (cur_sum + (n - i + 1) * tmax[i] < s) return;

    //nhanh can 2(cong thuc giong trong sach)
//    if (cur_sum < s && i <= n) {
//        if (cur_cnt + (s - cur_sum + tmax[i] - 1) / tmax[i] >= cbest) return;
//    }


    //Dk dung quay lui
    if(i > n){
        if (cur_sum == s && cur_cnt < cbest){
                cbest = cur_cnt;
            for (int i = 1; i <= n; i++){
                xbest[i] = x[i];
            }
        }
        return;
    }

    //TH1
    if (cur_sum + t[i] <= s){
    cur_sum += t[i];
    x[i] = 1;
    cur_cnt++;

    backtrack(i + 1);


    //quay lui muon tra
    cur_cnt--;
    cur_sum -= t[i];
    x[i] = 0;
    }

    //TH2 khong boc to tien thu i
    x[i] = 0;
    backtrack(i + 1);


}
int main(){
    cin >> n >> s;
    for (int  i = 1; i <= n; i++) cin >> t[i];
    sort(t + 1, t + n + 1, greater<long long> ());

    tmax[n] = t[n];
    for (int i = n - 1; i >= 1; i--){
        tmax[i] = max(t[i], tmax[i + 1]);
    }

    backtrack(1);
    output();
    return 0;
}
