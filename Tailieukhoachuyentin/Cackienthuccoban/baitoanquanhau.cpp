#include <iostream>
using namespace std;

int n = 8, x[20];
bool col[20], d1[40], d2[40]; // Mảng đánh dấu cột và 2 đường chéo
int cnt = 0;
void output() {
    for (int i = 1; i <= n; i++) cout << x[i] << " ";
    cout << endl;
}

void Backtrack(int i) { // i là hàng hiện tại đang xét
    // <Xác định Si>: Duyệt qua các cột j từ 1 đến n
    for (int j = 1; j <= n; j++) {

        // Kiểm tra an toàn (Thay cho bước <Xác định Si> chi tiết)
        if (!col[j] && !d1[i - j + n] && !d2[i + j]) {

            x[i] = j; // <ghi nhận thành phần thứ i>

            // Đánh dấu để các quân hậu sau không chọn trúng
            col[j] = d1[i - j + n] = d2[i + j] = true;

            if (i == n) { // if (tìm thấy nghiệm)
                //output();
                cnt++;
            } else {
                Backtrack(i + 1); // Backtrack(i+1)
            }

            // <loại thành phần i>: QUAY LUI ĐÂY NÀY!
            // Bỏ đánh dấu để vòng lặp for ở hàng i có thể thử cột tiếp theo (j+1)
            col[j] = d1[i - j + n] = d2[i + j] = false;
        }
    }
}

int main() {
    Backtrack(1);
    cout << cnt << endl;
    return 0;
}
