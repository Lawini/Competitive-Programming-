#include<bits/stdc++.h>
#define FOR(i, a, b) for (int i = (a), _b = (b); i <= _b; i++)
#define FORD(i, b, a) for (int i = (b), _a = (a); i >= _a; i--)
#define REP(i, n) for (int i = 0, _n = (n); i < _n; i++)
#define FORE(i, v) for (__typeof((v).begin()) i = (v).begin(); i != (v).end(); i++)
#define ALL(v) (v).begin(), (v).end()
#define IS_INF(x)   (std::isinf(x))
#define IS_NAN(x)   (std::isnan(x))
#define fi   first
#define se   second
#define MASK(i) (1LL << (i))
#define BIT(x, i) (((x) >> (i)) & 1)
#define div   ___div
#define prev   ___prev
#define left   ___left
#define right   ___right
#define __builtin_popcount __builtin_popcountll
using namespace std;
template<class X, class Y>
    bool minimize(X &x, const Y &y) {
        if (x > y) {
            x = y;
            return true;
        } else return false;
    }
template<class X, class Y>
    bool maximize(X &x, const Y &y) {
        if (x < y) {
            x = y;
            return true;
        } else return false;
    }
template<class T>
    T Abs(const T &x) {
        return (x < 0 ? -x : x);
    }

/* Author: Van Hanh Pham */

/** END OF TEMPLATE. DRINK A CUP OF TIGERSUGAR BEFORE READING MY CODE. **/

int n;

/*
1. Tìm hậu tố giảm dần dài nhất. Nói cách khác, ta duyệt i từ n - 1 về 1, tìm vị trí i đầu tiên sao cho a[i] < a[i + 1] 
(vị trí đầu tiên ko giảm dần). 
Khi đó, dãy a[i + 1] > a[i + 2] > a[i + 3] > ... > a[n] là hậu tố giảm dần dài nhất
2. Tìm j thuộc i + 1 .. n sao cho a[j] nhỏ nhất và a[j] > a[i]. Đổi chỗ a[i], a[j]. Do dãy a[i + 1] > a[i + 2] > ... > a[n] là dãy giảm dần 
nên j tìm được là j phải nhất.
3. Đảo ngược phần a[i + 1 -> n] để từ dãy giảm dần trở thành tăng dần 
Nếu ở bước 1 không tìm thấy i, toàn bộ dãy đã là dãy giảm dần 
-> đây là hoán vị cuối cùng cần liệt kê (có thứ tự từ điển lớn nhất)

*/
bool getNext(vector<int> &perm) {
    for (int i = n - 2; i >= 0; i--) if (perm[i] < perm[i + 1]) {
        for (int j = n - 1; j > i; j--) if (perm[j] > perm[i]) {
            swap(perm[i], perm[j]);
            break;
        }
        reverse(perm.begin() + i + 1, perm.end());
        return true;
    }
    return false;
}

int main(void) {
    cin >> n;

    vector<int> perm;
    for (int i = 1; i <= n; i++) perm.push_back(i);

    do {
        cout << perm[0];
        for (int i = 1; i < n; i++) cout << ", " << perm[i];
        cout << "\n";
    } while (getNext(perm));

    return 0;
}

/*** BUBBLE TEA IS GREAT. MY CODE IS AMAZING :D ***/
