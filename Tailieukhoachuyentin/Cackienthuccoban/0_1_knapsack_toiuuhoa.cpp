#include<bits/stdc++.h>
using namespace std;
int n, W;
int wt[35], v[35];
int max_s = 0;
struct Item{
    int w, v, id;
};
bool cmp(Item a, Item b){
    return (double) a.v / a.w > (double) b.v / b.w;
}
double get_bound(int i, int cur_w, int cur_v){
    if (cur_w >= W) return (double)cur_w;

    double upper_bound = (double) cur_v;
    int total_w = cur_w;

    //Tham an thu dong con lai
    for (int j = i; j <= n; j++){
        if (total_w + wt[j] <= W){
            total_w += wt[j];
            upper_bound += v[j];
        }

        else{
            upper_bound += (double) (W - total_w) * (v[j] * 1.0 / wt[j]);
            break;
        }
    }
    return upper_bound;
}
void solve(int i, int cur_w, int cur_v){

    //Cap nhat ky luc neu thay bo htai ngon hon
    if (cur_v > max_s){
        max_s = cur_v;
    }

    //dk dung
    if (i > n){
        return;
    }

    if ((double)get_bound(i, cur_w, cur_v) <= (double)max_s) return;

    if (cur_w + wt[i] <= W){
        solve(i + 1, cur_w + wt[i], cur_v + v[i]);
    }

    solve(i + 1, cur_w, cur_v);

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> n >> W;
    vector<Item> items(n);
    for (int i = 0; i < n; i++){
        cin >> items[i].w >> items[i].v;
    }


    sort(items.begin(), items.end(), cmp);
    for (int i = 1; i <= n; i++){
        wt[i] = items[i - 1].w;
        v[i] = items[i - 1].v;
    }
    solve(1, 0, 0);
    cout << max_s << endl;
}
