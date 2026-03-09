#include <stdio.h>
int get_odd_base(int x) {
    while (x % 2 == 0) {
        x /= 2;
    }
    return x;
}

void solve() {
    int n;
    scanf("%d", &n);

    int possible = 1; 

    for (int i = 1; i <= n; i++) {
        int val;
        scanf("%d", &val);
        
      
        if (get_odd_base(val) != get_odd_base(i)) {
            possible = 0;
          
        }
    }

    if (possible) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    int t;
    if (scanf("%d", &t) == 1) {
        while (t--) {
            solve();
        }
    }
    return 0;
}
