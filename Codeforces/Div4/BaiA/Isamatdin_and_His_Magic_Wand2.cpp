#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        int even = 0, odd = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] % 2 == 0) even++;
            else odd++;
        }

        if (even == n || odd == n) {
            for (int i = 0; i < n; i++) cout << a[i] << ' ';
        } else {
            sort(a, a + n);
            for (int i = 0; i < n; i++) cout << a[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}