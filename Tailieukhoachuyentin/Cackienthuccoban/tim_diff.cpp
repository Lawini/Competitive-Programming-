#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int a[100005];
void diff(int l, int r, int &maxdiff, int &maxV, int &minV){
    //Neu ma chia chi con 1 phan tu
    if (l == r){
        maxdiff = 0;
        maxV = a[l];
        minV = a[l];
        return;
    }

    int maxD1, maxV1, minV1; //nua trai
    int maxD2, maxV2, minV2; //nua phai

    int mid = l + (r - l) / 2;
    diff(l, mid, maxD1, maxV1, minV1);
    diff(mid + 1, r, maxD2, maxV2, minV2);

    //vi i <= j nen chi co maxV2 - minV1;
    maxdiff = max({maxD1, maxD2, maxV2 - minV1});
    maxV = max(maxV1, maxV2);
    minV = min(minV1, minV2);
}
void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];

    int maxdiff, tmp1, tmp2;
    diff(1, n, maxdiff, tmp1, tmp2);
    cout << maxdiff << endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while(t--){
        solve();
    }
}
