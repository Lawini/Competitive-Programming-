#include<bits/stdc++.h>
using namespace std;
/*
bai toan tim duong di ma chi dc di qua moi dinh 1 lan tim chi phi re nhat de di qua het tat ca cac dinh roi ve lai ban dau
input
4
0 20 35 40
20 0 34 30
35 34 0 12
42 30 12 0

output
97
1 -> 2 -> 4 -> 3 -> 1
*/
int n;
const long long INF = 1e18;
long long C[101][101];
bool visited[101];
long long total_cost = 0;
vector<int> path;
void output(){
    cout << total_cost << endl;
    for (int i = 0; i < path.size(); i++){
        cout << path[i] << (i == path.size() - 1 ? "" : " -> ");
    }
    cout << endl;
}
void greedy(){

    int cur_city = 1;

    path.push_back(1);
    visited[1] = true;

    for (int i = 1; i < n; i++){

        int next_city = -1;
        long long min_dist = INF;

       for (int j = 1; j <= n; j++){
            if (!visited[j] && C[cur_city][j] < min_dist){
                min_dist = C[cur_city][j];
                next_city = j;
            }
       }
       if (next_city != -1){
        total_cost += min_dist;
        visited[next_city] = true;
        cur_city = next_city; // da den thanh pho tiep theo
        path.push_back(cur_city);
       }
    }

    // quay tro lai thanh pho 1
    total_cost += C[cur_city][1];
    path.push_back(1);
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> C[i][j];
        }
    }

    greedy();
    output();
    return 0;

}
