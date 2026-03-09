#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long L, l;
    cin >> L >> l;
    
    // S? m?nh c?n có
    long long n = (L + l - 1) / l;  // = ceil(L/l)
    
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    
    // Tính d? dài các m?nh cu?i cùng
    priority_queue<long long, vector<long long>, greater<long long >> pq;
    
    long long du = L % l;
    if (du == 0) {
        // T?t c? m?nh d?u dài l
        for (int i = 0; i < n; i++) {
            pq.push(l);
        }
    } else {
        // Có (n-1) m?nh dài l và 1 m?nh dài du
        pq.push(du);
        for (int i = 0; i < n - 1; i++) {
            pq.push(l);
        }
    }
    
    // Áp d?ng thu?t toán Huffman ngu?c
    // G?p các m?nh nh? nh?t l?i v?i nhau
    long long tongCS = 0;
    
    while (pq.size() > 1) {
        long long manh1 = pq.top(); pq.pop();
        long long manh2 = pq.top(); pq.pop();
        
        long long manhMoi = manh1 + manh2;
        tongCS += manhMoi + 1;
        
        pq.push(manhMoi);
    }
    
    cout << tongCS << endl;
    
    return 0;
}
