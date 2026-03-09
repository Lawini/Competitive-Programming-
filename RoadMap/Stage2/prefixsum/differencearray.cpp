#include <stdio.h>

int main() {
    int D[10] = {0}; // Khởi tạo mảng D toàn 0
    int A[10];       // Mảng kết quả
    int n = 5;       // 5 cái xô

    // 1. Đoạn [2, 4] tăng 2
    D[2] += 2;
    D[4 + 1] -= 2;

    // 2. Đoạn [3, 5] tăng 5
    D[3] += 5;
    D[5 + 1] -= 5;

    // 3. Cộng dồn ra kết quả
    int current_val = 0;
    printf("Ket qua cac xo: ");
    for(int i = 1; i <= n; i++) {
        current_val += D[i];
        A[i] = current_val;
        printf("%d ", A[i]);
    }
    // Output se la: 0 2 7 7 5
    return 0;
}