#include <bits/stdc++.h>
using namespace std;
int max_val(int a, int b)
{
    return a > b ? a : b;
}
int min_val(int a, int b){
    return a < b ? a : b;

}
void solve()
//{
//
//    int a, d, b, e, c, f;
//    cin >> a >> d >> b >> e >> c >> f;
//
//    int cnt = 0;
//    int i = 1;
//    while(cnt < 100){
//        if (i == 1)
//        {
//            if (d + e <= b)
//            {
//                e += d;
//                d = 0;
//            }
//            else
//            {
//                d = d + e - b;
//                e = b;
//            }
//            i = 2;
//            cnt++;
//        }
//        else if (i == 2)
//        {
//            if (e + f <= c)
//            {
//                f += e;
//                e = 0;
//            }
//            else
//            {
//                e = e + f - c;
//                f = c;
//            }
//            i = 3;
//            cnt++;
//        }
//        else if (i == 3)
//        {
//            if (f + d <= a)
//            {
//                d += f;
//                f = 0;
//            }
//            else
//            {
//                f = f + d - a;
//                d = a;
//            }
//            i = 1;
//            cnt++;
//        }
//
//
//    }
//    cout << d << endl;
//    cout << e << endl;
//    cout << f << endl;
//
//}



// cach 2
{

    int N = 3;
    int nums = 100;

    vector<int> cap(3);
    vector<int> cur_milk(3);

    for (int i = 0; i < 3; i++){
        cin >> cap[i] >> cur_milk[i];
    }


    for(int i = 0; i < 100; i++){

        int bucket1 = i % N;
        int bucket2 = (i + 1) % N;


        int amt = min_val(cur_milk[bucket1], cap[bucket2] - cur_milk[bucket2]);

        cur_milk[bucket1] -= amt;
        cur_milk[bucket2] += amt;

    }
    for (int i = 0; i < 3; i++){
        cout << cur_milk[i] << endl;
    }












}






int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


//    freopen("shell.in", "r", stdin);
//    freopen("shell.out", "w", stdout);

    int t = 1;
    //cin >> t;

    while(t--)
    {
        solve();
    }



}
