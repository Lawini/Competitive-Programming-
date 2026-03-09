#include <stdio.h>

long long S[5][5]; 
int A[5][5] = {
    {0,0,0,0}, // Hang 0 bo qua
    {0, 1, 1, 1}, // Hang 1
    {0, 1, 5, 1}, // Hang 2
    {0, 1, 1, 1}  // Hang 3
};

int main() {
    int n = 3, m = 3;

    // 1. Xay dung bang S
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            // Cong thuc huyen thoai
            S[i][j] = S[i-1][j] + S[i][j-1] - S[i-1][j-1] + A[i][j];
        }
    }

    // 2. Tinh thu cong 1 lan
    // Tinh tong hcn tu (2,2) den (3,3)
    int x1 = 2, y1 = 2, x2 = 3, y2 = 3;
    long long ketqua = S[x2][y2] - S[x1-1][y2] - S[x2][y1-1] + S[x1-1][y1-1];
    
    printf("Tong can tim: %lld", ketqua); // Output: 8
    
    return 0;
}