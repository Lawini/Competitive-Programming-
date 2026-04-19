#include<bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int (i)=(a); (i)<=(b); i++)
#define FORD(i, a, b) for(int (i)=(a); (i)>=(b); i--)
#define N 100005
#define ll long long
#define fi first
#define se second
int gcd(int a, int b){
    return b == 0 ? a : gcd(b, a % b);
}
int n, m, x, a[11];
ll res = 0;
vector<pair<int, int>> c[11]; // condition({a, g})
vector<int> p[11], l1;  // p: potential l1 : list type 1
void solve(int k){
    //k la thu tu trong mang l1
    if (k == l1.size()){
        res++;
        return;
    }


    int i = l1[k];
    //vd i = l1[0] = 1
    //thi v : p[i] la lay v tu p[1] ={2, 4} chang han
    for(int v : p[i]){
        int ok = 1;
        for (auto &e : c[i]){
                if(a[e.fi] && gcd(v, a[e.fi]) != e.se){
                    ok = 0;
                    break;
            }
        }
        if (ok){
            a[i] = v;
            solve(k + 1);
            a[i] = 0; //backtrack ve lai 0
        }
    }
}
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    cin >> n >> m >> x;

    //mang luu cac bien lien quan den g
    vector<int> rg[11];
    while(m--){
        int i, j, g;
        cin >> i >> j >> g;


        c[i].push_back({j, g});
        c[j].push_back({i, g});
        rg[i].push_back(g);
        rg[j].push_back(g);
    }

        //Ham tien xu ly de giam de quy
        // vd 6 12 thi chac chan so bat dau phai la 6
        for (int i = 1; i <= n; i++){
            if (c[i].size()){
                l1.push_back(i);
                for (int v = 1; v <= x; v++){
                    int ok = 1;
                    for(int g : rg[i]){
                        if (v % g) {
                        ok = 0;
                        break;
                    }
                } 
                if(ok) p[i].push_back(v);    
            }
       }
    }
        if(l1.empty()) res = 1;
        else solve(0);    
        

        for (int i = 0; i < n - l1.size(); i++) res *= x;
        cout << res << endl;
    
}
