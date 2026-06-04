#include<bits/stdc++.h>
using namespace std;
const int maxn = 5000;
const int MOD = 1e9 + 7;
int f[maxn], a[maxn];
//C1 Greedy + Binary On Answer
//int lb_index(const vector<int> &tail , int x){
//    int l = 0;
//    int r = tail.size() - 1;
//    int ans = -1;
//
//    while(l <= r){
//        int mid = l + (r - l) / 2;
//        if (tail[mid] >= x){
//            ans = mid;
//            r = mid - 1;
//        }
//        else {
//            l = mid + 1;
//        }
//    }
//
//    return ans;
//
//}
//int main(){
//
//    ios_base::sync_with_stdio(0);
//    cin.tie(0); cout.tie(0);
//	int n;
//	cin >> n;
//
//	for (int i = 0; i < n; i++) cin >> a[i];
//	vector<int> tail;
//
//
//	vector<int> tail_id;
//	vector<int> trace(n, - 1);
//
//
//	for (int i = 0; i < n; i++){
//        if (tail.empty()){
//            tail.push_back(a[i]);
//            tail_id.push_back(i);
//            continue;
//        }
//
//        int index = (lb_index(tail, a[i]));
//
//        if (index == - 1){
//            //Khong tim dc cai tail[index] >= x
//            index = tail.size();
//            tail.push_back(a[i]);
//            tail_id.push_back(i);
//        }
//        else{
//            tail[index] = a[i];
//            tail_id[index] = i;
//        }
//        if (index  > 0){
//            trace[i] = tail_id[index - 1]; //noi day voi cot truoc no
//        }
//    }
//
//    //Trace
//    vector<int> lis_elements;
//
//    //Bat dau tu phan tu cuoi cua mang tail
//    int cur_id = tail_id.back();
//
//    while(cur_id != - 1){
//        lis_elements.push_back(a[cur_id]);
//        cur_id = trace[cur_id];
//    }
//
//    reverse(lis_elements.begin(), lis_elements.end());
//
//
//
//    cout << tail.size() << endl;
//    for (int x : lis_elements){
//        cout << x << " ";
//    }
//}

//C2 QUY HOACH DONG
int main(){
    int n;
    cin >> n;

    int ans = 0;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++){
        f[i] = 1;
        for (int j = 1; j < i; j++){
            if (a[j] < a[i]){
                if (f[j] + 1 > f[i]){
                    f[i] = f[j] + 1;
                }
            }
        }

        ans = max(ans, f[i]);
    }

    cout << ans << endl;
}






