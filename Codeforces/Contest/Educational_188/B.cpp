#include <bits/stdc++.h>
#include<limits.h>
#include<stdio.h>
#define N 1000005
using namespace std;

int a[N];
int max_val(int a, int b){
    return a > b ? a : b;
}
void solve(){
    int n;
    cin >> n;

    int cur_max = 0;
    int count = 0;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        if (x >= cur_max){
            cur_max = x;
            count++;
        }
    }
    
    cout << count << endl;





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