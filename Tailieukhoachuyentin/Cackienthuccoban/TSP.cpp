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
int path[25];
int x[25], C[25][25];
bool visited[25];
int cur_cost = 0, min_cost = 1e9;
void output(){
    cout << min_cost << endl;
    for (int i = 1; i <= n; i++){
        cout << path[i] << "->";
    }
    cout << 1 << endl;
}
void backtrack(int i){

    //pp nhanh can giam thieu so th quay lui
    if (cur_cost >= min_cost) return;

    for (int j = 2; j <= n; j++){
        if(!visited[j]){
            x[i] = j;
            visited[j] = true;
            cur_cost += C[x[i - 1]][j];

         if (i == n){
            int final_cost = cur_cost + C[x[n]][1];
            if (final_cost <= min_cost){
                min_cost = final_cost;
                for (int i = 1; i <= n; i++){
                    path[i] = x[i];
                }
            }
         }
         else {
            backtrack(i + 1);
         }

         //quay lui
         visited[j] = false;
         cur_cost -= C[x[i - 1]][j];
        }
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cin >> C[i][j];
        }
    }
    x[1] = 1;
    backtrack(2);
    output();
    return 0;
}
